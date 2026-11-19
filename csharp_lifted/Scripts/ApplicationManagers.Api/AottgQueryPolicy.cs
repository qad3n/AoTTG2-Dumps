// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgQueryPolicy
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgQueryPolicy.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009C6")]
public sealed class AottgQueryPolicy
{
	[Token(Token = "0x4003105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly AottgQueryPolicy Default;

	[Token(Token = "0x17000F9E")]
	public TimeSpan SuccessTtl
	{
		[Token(Token = "0x6005A8D")]
		[Address(RVA = "0x5D2AD20", Offset = "0x5D29D20", VA = "0x5D2AD20")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgQueryPolicy.c (ApplicationManagers.Api.AottgQueryPolicy$$get_SuccessTtl): clean
			return (TimeSpan)(TimeSpan)this._SuccessTtl_k__BackingField._ticks ;
		}
		[Token(Token = "0x6005A8E")]
		[Address(RVA = "0x5D2AD30", Offset = "0x5D29D30", VA = "0x5D2AD30")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgQueryPolicy.c (ApplicationManagers.Api.AottgQueryPolicy$$set_SuccessTtl): clean
			this._SuccessTtl_k__BackingField._ticks = (int64_t)value._ticks;
			return;
		}
	}

	[Token(Token = "0x17000F9F")]
	public TimeSpan? FailureTtl
	{
		[Token(Token = "0x6005A8F")]
		[Address(RVA = "0x5D2AD40", Offset = "0x5D29D40", VA = "0x5D2AD40")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgQueryPolicy.c (ApplicationManagers.Api.AottgQueryPolicy$$get_FailureTtl): 1 lines keep C-only constructs
			Nullable<TimeSpan> SVar1;

			SVar1._1_7_ = 0;
			SVar1.hasValue = this._FailureTtl_k__BackingField.hasValue;
			SVar1.value._ticks =(TimeSpan)(TimeSpan)this._FailureTtl_k__BackingField.value._ticks;
			return (Nullable<TimeSpan>)SVar1;
		}
		[Token(Token = "0x6005A90")]
		[Address(RVA = "0x5D2AD50", Offset = "0x5D29D50", VA = "0x5D2AD50")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgQueryPolicy.c (ApplicationManagers.Api.AottgQueryPolicy$$set_FailureTtl): clean
			this._FailureTtl_k__BackingField.hasValue = value.hasValue;
			this._FailureTtl_k__BackingField.value._ticks =(int64_t)value.value._ticks;
			return;
		}
	}

	[Token(Token = "0x17000FA0")]
	public bool PreserveStaleOnFailure
	{
		[Token(Token = "0x6005A91")]
		[Address(RVA = "0x5D2AD60", Offset = "0x5D29D60", VA = "0x5D2AD60")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgQueryPolicy.c (ApplicationManagers.Api.AottgQueryPolicy$$get_PreserveStaleOnFailure): clean
			return this._PreserveStaleOnFailure_k__BackingField;
		}
		[Token(Token = "0x6005A92")]
		[Address(RVA = "0x5D2AD70", Offset = "0x5D29D70", VA = "0x5D2AD70")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Api/AottgQueryPolicy.c (ApplicationManagers.Api.AottgQueryPolicy$$set_PreserveStaleOnFailure): clean
			this._PreserveStaleOnFailure_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6005A8C")]
	[Address(RVA = "0x5D27D60", Offset = "0x5D26D60", VA = "0x5D27D60")]
	public AottgQueryPolicy(TimeSpan successTtl, [Optional] TimeSpan? failureTtl, bool preserveStaleOnFailure = true)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgQueryPolicy.c (ApplicationManagers.Api.AottgQueryPolicy$$.ctor): 7 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		TimeSpan SVar3;
		Il2CppClass pIVar4;
		ArgumentOutOfRangeException __this_00;
		String paramName;
		MethodInfo lastManagedFrame;
		String* metadataPointer;
		Nullable<TimeSpan> local_40;

		SVar3 = failureTtl.value._ticks;
		bVar2 = failureTtl.hasValue;
		local_40.hasValue = bVar2;
		local_40.value._ticks = SVar3._ticks;
		base();
		bVar1 = (successTtl < (TimeSpan)(TimeSpan.Zero)._ticks);
		if (bVar1) {
			pIVar4 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
			__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(pIVar4);
			metadataPointer = &"successTtl";
	label_05e27ead: ;
			paramName = il2cpp_codegen_get_runtime_metadata(metadataPointer);
			__this_00 = new ArgumentOutOfRangeException(paramName);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_Api_AottgQueryPolicy_ctor);
			throw (object)__this_00;
		}
		if (bVar2 == false) {
			local_40.hasValue = false;
		}
		else {
			SVar3 = local_40.Value;
			bVar2 = (SVar3 < (TimeSpan)(TimeSpan.Zero)._ticks);
			if (bVar2) {
				pIVar4 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(pIVar4);
				metadataPointer = &"failureTtl";
				goto label_05e27ead;
			}
			SVar3._ticks = local_40.value._ticks;
		}
		this._SuccessTtl_k__BackingField._ticks = (int64_t)successTtl._ticks;
		this._FailureTtl_k__BackingField.hasValue = local_40.hasValue;
		this._FailureTtl_k__BackingField.value._ticks = (int64_t)SVar3._ticks;
		this._PreserveStaleOnFailure_k__BackingField = preserveStaleOnFailure;
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/Api/AottgQueryPolicy.c.

	// ApplicationManagers.Api.AottgQueryPolicy$$.cctor: 1 lines keep C-only constructs
	static AottgQueryPolicy()
	{
		TimeSpan successTtl;
		AottgQueryPolicy __this;

		successTtl = TimeSpan.FromMinutes(30.0);
		__this = new AottgQueryPolicy(successTtl, (Nullable<TimeSpan>)ZEXT816(0), true);
		AottgQueryPolicy.Default = __this;
		return;
	}
}
