// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLTypeAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLTypeAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200044D")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
[Conditional("UNITY_EDITOR")]
internal class CLTypeAttribute : CLBaseAttribute
{
	[Token(Token = "0x170002D7")]
	public bool Abstract
	{
		[Token(Token = "0x6001A9C")]
		[Address(RVA = "0x58A9990", Offset = "0x58A8990", VA = "0x58A9990")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLTypeAttribute.c (CustomLogic.CLTypeAttribute$$get_Abstract): clean
			return this._Abstract_k__BackingField;
		}
		[Token(Token = "0x6001A9D")]
		[Address(RVA = "0x58A99A0", Offset = "0x58A89A0", VA = "0x58A99A0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLTypeAttribute.c (CustomLogic.CLTypeAttribute$$set_Abstract): clean
			this._Abstract_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002D8")]
	public bool InheritBaseMembers
	{
		[Token(Token = "0x6001A9E")]
		[Address(RVA = "0x58A99B0", Offset = "0x58A89B0", VA = "0x58A99B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLTypeAttribute.c (CustomLogic.CLTypeAttribute$$get_InheritBaseMembers): clean
			return this._InheritBaseMembers_k__BackingField;
		}
		[Token(Token = "0x6001A9F")]
		[Address(RVA = "0x58A99C0", Offset = "0x58A89C0", VA = "0x58A99C0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLTypeAttribute.c (CustomLogic.CLTypeAttribute$$set_InheritBaseMembers): clean
			this._InheritBaseMembers_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002D9")]
	public string[] TypeParameters
	{
		[Token(Token = "0x6001AA0")]
		[Address(RVA = "0x58A99D0", Offset = "0x58A89D0", VA = "0x58A99D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLTypeAttribute.c (CustomLogic.CLTypeAttribute$$get_TypeParameters): clean
			return this._TypeParameters_k__BackingField;
		}
		[Token(Token = "0x6001AA1")]
		[Address(RVA = "0x58A99E0", Offset = "0x58A89E0", VA = "0x58A99E0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLTypeAttribute.c (CustomLogic.CLTypeAttribute$$set_TypeParameters): clean
			this._TypeParameters_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002DA")]
	public bool IsComponent
	{
		[Token(Token = "0x6001AA2")]
		[Address(RVA = "0x58A99F0", Offset = "0x58A89F0", VA = "0x58A99F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLTypeAttribute.c (CustomLogic.CLTypeAttribute$$get_IsComponent): clean
			return this._IsComponent_k__BackingField;
		}
		[Token(Token = "0x6001AA3")]
		[Address(RVA = "0x58A9A00", Offset = "0x58A8A00", VA = "0x58A9A00")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLTypeAttribute.c (CustomLogic.CLTypeAttribute$$set_IsComponent): clean
			this._IsComponent_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6001AA4")]
	[Address(RVA = "0x58A9A10", Offset = "0x58A8A10", VA = "0x58A9A10")]
	public CLTypeAttribute()
	{
		// Lifted from source/cpp/CustomLogic/CLTypeAttribute.c (CustomLogic.CLTypeAttribute$$.ctor): clean
		this._InheritBaseMembers_k__BackingField = true;
		this._Name_k__BackingField = "";
		base();
		return;
	}
}
