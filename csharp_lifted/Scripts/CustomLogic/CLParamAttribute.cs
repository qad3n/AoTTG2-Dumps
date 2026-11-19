// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLParamAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLParamAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200044B")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Parameter)]
internal class CLParamAttribute : Attribute
{
	[Token(Token = "0x170002D2")]
	public string Type
	{
		[Token(Token = "0x6001A90")]
		[Address(RVA = "0x58A9890", Offset = "0x58A8890", VA = "0x58A9890")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLParamAttribute.c (CustomLogic.CLParamAttribute$$get_Type): clean
			return this._Type_k__BackingField;
		}
		[Token(Token = "0x6001A91")]
		[Address(RVA = "0x58A98A0", Offset = "0x58A88A0", VA = "0x58A98A0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLParamAttribute.c (CustomLogic.CLParamAttribute$$set_Type): clean
			this._Type_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002D3")]
	public Type[] Enum
	{
		[Token(Token = "0x6001A92")]
		[Address(RVA = "0x58A98B0", Offset = "0x58A88B0", VA = "0x58A98B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLParamAttribute.c (CustomLogic.CLParamAttribute$$get_Enum): clean
			return this._Enum_k__BackingField;
		}
		[Token(Token = "0x6001A93")]
		[Address(RVA = "0x58A98C0", Offset = "0x58A88C0", VA = "0x58A98C0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLParamAttribute.c (CustomLogic.CLParamAttribute$$set_Enum): clean
			this._Enum_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6001A94")]
	[Address(RVA = "0x58A98D0", Offset = "0x58A88D0", VA = "0x58A98D0")]
	public CLParamAttribute()
	{
		// Lifted from source/cpp/CustomLogic/CLParamAttribute.c (CustomLogic.CLParamAttribute$$.ctor): clean
		base();
		return;
	}
}
