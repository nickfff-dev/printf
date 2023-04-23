###These are the names of the contributors to this github repository
    * Paul Mulatya  [Mulatya's github](https://github.com/paul-mulatya)
    *  Nasir Nyamache [Nasir's github](https://github.com/nickfff-dev)

##To contribute to this project 
1. clone repo  printf
2. create a branch with your name git checkout -b yourname
3. Make changes, commit and push to your branch git push origin yourname
4. check out the difference in the branches to see if your work is ok git diff
master yourname
5. When the master branch custodian is ready to merge your changes, you should
first clean up the yourname branch.
this is done by checking if their are any changes on the master branch that are
not in yourname branch using command
git log ..master .  This shows all commits on ‘master’ that aren’t in yourname
branch history. If you see any commits here, then rebase the yourname branch 
using: git rebase master   This replays your commits on top of the new commits
from the destination branch so that the merge can be a ‘fast-forward’
6. Master branch custodian will then merge you from the msater branch using command git merge yourname
