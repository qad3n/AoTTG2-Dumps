// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLPropertyAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLPropertyAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200044C")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field)]
internal class CLPropertyAttribute : CLBaseAttribute
{
	[Token(Token = "0x170002D4")]
	public bool ReadOnly
	{
		[Token(Token = "0x6001A95")]
		[Address(RVA = "0x58A98E0", Offset = "0x58A88E0", VA = "0x58A98E0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLPropertyAttribute.c (CustomLogic.CLPropertyAttribute$$get_ReadOnly): clean
			return this._ReadOnly_k__BackingField;
		}
		[Token(Token = "0x6001A96")]
		[Address(RVA = "0x58A98F0", Offset = "0x58A88F0", VA = "0x58A98F0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLPropertyAttribute.c (CustomLogic.CLPropertyAttribute$$set_ReadOnly): clean
			this._ReadOnly_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002D5")]
	public string[] TypeArguments
	{
		[Token(Token = "0x6001A97")]
		[Address(RVA = "0x58A9900", Offset = "0x58A8900", VA = "0x58A9900")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLPropertyAttribute.c (CustomLogic.CLPropertyAttribute$$get_TypeArguments): clean
			return this._TypeArguments_k__BackingField;
		}
		[Token(Token = "0x6001A98")]
		[Address(RVA = "0x58A9910", Offset = "0x58A8910", VA = "0x58A9910")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLPropertyAttribute.c (CustomLogic.CLPropertyAttribute$$set_TypeArguments): clean
			this._TypeArguments_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002D6")]
	public Type[] Enum
	{
		[Token(Token = "0x6001A99")]
		[Address(RVA = "0x58A9920", Offset = "0x58A8920", VA = "0x58A9920")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLPropertyAttribute.c (CustomLogic.CLPropertyAttribute$$get_Enum): clean
			return this._Enum_k__BackingField;
		}
		[Token(Token = "0x6001A9A")]
		[Address(RVA = "0x58A9930", Offset = "0x58A8930", VA = "0x58A9930")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLPropertyAttribute.c (CustomLogic.CLPropertyAttribute$$set_Enum): clean
			this._Enum_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6001A9B")]
	[Address(RVA = "0x58A9940", Offset = "0x58A8940", VA = "0x58A9940")]
	public CLPropertyAttribute(bool readOnly = false)
	{
		// Lifted from source/cpp/CustomLogic/CLPropertyAttribute.c (CustomLogic.CLPropertyAttribute$$.ctor): clean
		this._Name_k__BackingField = "";
		base();
		this._ReadOnly_k__BackingField = readOnly;
		return;
	}
}
