# makefile to push to github

# git add all files
gitadd:
	git add .

# git commit with message (input from user)
gitcommit:
	@if [ -z "$(msg)" ]; then echo "Commit message is required. Use 'make gitcommit msg=\"your message\"'"; exit 1; fi; \
	git commit -m "$(msg)"

# git push to github
gitpush:
	git push origin HEAD:main

# git add, commit, and push
gitacp: gitadd gitcommit gitpush
