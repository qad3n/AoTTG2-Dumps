// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicRangeBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicRangeBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRangeBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000470")]
[CompilerGenerated]
internal class CustomLogicRangeBuiltin : CustomLogicListBuiltin
{
	[Token(Token = "0x2000471")]
	public new static class Factory
	{
		[Token(Token = "0x6001C08")]
		[Address(RVA = "0x58B96B0", Offset = "0x58B86B0", VA = "0x58B96B0")]
		public static CustomLogicRangeBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRangeBuiltin.c (CustomLogic.CustomLogicRangeBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object pIVar1;
			int end;
			int step;
			int start;
			ulong uVar2;
			CustomLogicRangeBuiltin __this;
			String pSVar3;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int iVar4;
			int local_2c;

			if (args == null) {
				throw new NullReferenceException();
			}
			iVar4 = (int)args.Length;
			uVar2 = args.Length & 0xffffffff;
			if (iVar4 == 3) {
				if (uVar2 != 0) {
					pIVar1 = args[0];
					start = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
					if ((args.Length & 0xfffffffe) != 0) {
						end = CustomLogicEvaluator.ConvertTo<int>(args[1]);
						if ((uint)args.Length < 3) goto label_059b987f;
						step = CustomLogicEvaluator.ConvertTo<int>(args[2]);
						goto label_059b986a;
					}
				}
		label_059b987f: ;
				throw new IndexOutOfRangeException();
			}
			if (iVar4 == 2) {
				if (uVar2 == 0) goto label_059b987f;
				pIVar1 = args[0];
				start = CustomLogicEvaluator.ConvertTo<int>(pIVar1) ;
				if ((args.Length & 0xfffffffe) == 0) goto label_059b987f;
				end = CustomLogicEvaluator.ConvertTo<int>(args[1]);
			}
			else {
				if (iVar4 != 1) {
					local_2c = (int32_t)args.Length;
					pSVar3 = local_2c.ToString();
					str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRangeBuiltin constructor found that takes ");
					str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
					pSVar3 = String.Concat(str0, pSVar3, str2);
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
					__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
					__this_00 = new ArgumentException(pSVar3);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRangeBuiltin_Factory_CreateInstance);
					throw (object)__this_00;
				}
				if (uVar2 == 0) goto label_059b987f;
				pIVar1 = args[0];
				end = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
				start = 0;
			}
			step = 1;
		label_059b986a: ;
			__this = new CustomLogicRangeBuiltin(start, end, step);
			return __this;
		}
	}

	[Token(Token = "0x2000472")]
	public new static class Bindings
	{
		[Token(Token = "0x400160C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001C09")]
		[Address(RVA = "0x58B9910", Offset = "0x58B8910", VA = "0x58B9910")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRangeBuiltin.c (CustomLogic.CustomLogicRangeBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			String pSVar1;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			pSVar1 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRangeBuiltin not found");
			pSVar1 = String.Concat(pSVar1, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRangeBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}
	}

	[Token(Token = "0x17000307")]
	public override string ClassName
	{
		[Token(Token = "0x6001C04")]
		[Address(RVA = "0x58B9650", Offset = "0x58B8650", VA = "0x58B9650", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRangeBuiltin.c (CustomLogic.CustomLogicRangeBuiltin$$get_ClassName): clean
			return "Range";
		}
	}

	[Token(Token = "0x17000308")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001C05")]
		[Address(RVA = "0x58B9680", Offset = "0x58B8680", VA = "0x58B9680", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRangeBuiltin.c (CustomLogic.CustomLogicRangeBuiltin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x17000309")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001C06")]
		[Address(RVA = "0x58B9690", Offset = "0x58B8690", VA = "0x58B9690", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRangeBuiltin.c (CustomLogic.CustomLogicRangeBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x1700030A")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001C07")]
		[Address(RVA = "0x58B96A0", Offset = "0x58B86A0", VA = "0x58B96A0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRangeBuiltin.c (CustomLogic.CustomLogicRangeBuiltin$$get_InheritBaseMembers): clean
			return false;
		}
	}

	[Token(Token = "0x6001C01")]
	[Address(RVA = "0x58B9480", Offset = "0x58B8480", VA = "0x58B9480")]
	public CustomLogicRangeBuiltin(int end)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRangeBuiltin.c (CustomLogic.CustomLogicRangeBuiltin$$.ctor): clean


		base(0, end, 1);
		return;
	}

	[Token(Token = "0x6001C02")]
	[Address(RVA = "0x58B9640", Offset = "0x58B8640", VA = "0x58B9640")]
	public CustomLogicRangeBuiltin(int start, int end)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRangeBuiltin.c (CustomLogic.CustomLogicRangeBuiltin$$.ctor): clean


		base(start, end, 1);
		return;
	}

	[Token(Token = "0x6001C03")]
	[Address(RVA = "0x58B9490", Offset = "0x58B8490", VA = "0x58B9490")]
	public CustomLogicRangeBuiltin(int start, int end, int step)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRangeBuiltin.c (CustomLogic.CustomLogicRangeBuiltin$$.ctor): 11 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<object> pSVar3;
		Object[] pSVar4;
		ulong in_RAX;
		object pIVar5;
		uint in_register_00000034;
		MethodInfo pMVar6;
		ulong local_38;

		pMVar6 = (MethodInfo)CONCAT44(in_register_00000034, start);
		local_38 = in_RAX;
		base();
		if (step == 0) {
			return;
		}
		if (step < 1) {
			do {
				if (start <= end) {
					return;
				}
				while(true) {
					pSVar3 = this.List;
					local_38 = CONCAT44(local_38._4_4_, start);
					pIVar5 = (object)local_38;
					if (pSVar3 == null) goto label_059b962c;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = pSVar3._items;
					if (pSVar4 == null) goto label_059b962c;
					uVar2 = pSVar3._size;
					if ((uint)pSVar4.Length <= uVar2) break;
					pSVar3._size = uVar2 + 1;
					pSVar4[(int)uVar2] = pIVar5;
					start = start + step;
					if (start <= end) {
						return;
					}
				}
				pSVar3.AddWithResize(pIVar5);
				start = start + step;
			} while(true);
		}
	joined_r0x059b94dc: ;
		if (end <= start) {
			return;
		}
		do {
			pSVar3 = this.List;
			local_38 = CONCAT44(start, (undefined4)local_38);
			pIVar5 = (object)(((long)&local_38 + 4));
			if (pSVar3 == null) {
	label_059b962c: ;
				throw new NullReferenceException();
			}
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = pSVar3._items;
			if (pSVar4 == null) goto label_059b962c;
			uVar2 = pSVar3._size;
			if ((uint)pSVar4.Length <= uVar2) break;
			pSVar3._size = uVar2 + 1;
			pSVar4[(int)uVar2] = pIVar5;
			start = start + step;
			if (end <= start) {
				return;
			}
		} while(true);
		pSVar3.AddWithResize(pIVar5);
		start = start + step;
		goto joined_r0x059b94dc;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicRangeBuiltin.c.

	// CustomLogic.CustomLogicRangeBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		CustomLogicRangeBuiltin.Bindings.MemberNames = __this;
		return;
	}
}
