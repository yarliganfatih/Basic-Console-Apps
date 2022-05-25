%pkg load io

xlsFile=xlsread('shapes.xlsx')

A=zeros(10,10);

s(:,:,1) = xlsFile(1:3,:);
s(:,:,2) = [0 0 0;xlsFile(5:6,:)]; %convert shape height 2 to 3
s(:,:,3) = [0 0 0;xlsFile(8:9,:)]; %convert shape height 2 to 3
s(:,:,4) = xlsFile(11:13,:);

for i=1:5
  r = randi([1,4])
  b = randi([1,8])
  memory10 = A(10,:);
  for j=-1:10
    for k=1:8
      if(k==b)
        
        if(j<0)
          A(1,k:k+2) = s(3,:,r);
        elseif(j<1)
          A(1:2,k:k+2) = s(2:3,:,r);
        else
          A(j:j+2,k:k+2) = s(1:3,:,r);
        end
        if(j>1)
          A(j-1,k:k+2) = zeros(1,3);
        end
        
        if(j+2>11)
          A(11,:) = A(11,:) + A(12,:);
          A(12,:) = [];
        end
        if(j+2>10)
          A(10,:) = A(10,:) + A(11,:);
          A(11,:) = [];
        end
        
        break
      end
    end
    if(j>7)
      A(10,b:b+2) = A(10,b:b+2) + memory10(b:b+2);
    end
    
    clc
    disp(A)
    pause(1)
  end
end

maxNum=max(A(10,:))
maxNumCols=find(A(10,:) == max(A(10,:)))