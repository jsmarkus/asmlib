%ifdef BITS64
    %define full_ax rax
    %define full_bx rbx
    %define full_cx rcx
    %define full_dx rdx

    %define full_bp rbp
    %define full_sp rsp
%else
    %define full_ax eax
    %define full_bx ebx
    %define full_cx ecx
    %define full_dx edx

    %define full_bp ebp
    %define full_sp esp
%endif
