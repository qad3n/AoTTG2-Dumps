// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLBaseAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLBaseAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000446")]
[Conditional("UNITY_EDITOR")]
internal abstract class CLBaseAttribute : Attribute
{
	[Token(Token = "0x170002CC")]
	public string Name
	{
		[Token(Token = "0x6001A81")]
		[Address(RVA = "0x58A96B0", Offset = "0x58A86B0", VA = "0x58A96B0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLBaseAttribute.c (CustomLogic.CLBaseAttribute$$get_Name): clean
			return this._Name_k__BackingField;
		}
		[Token(Token = "0x6001A82")]
		[Address(RVA = "0x58A96C0", Offset = "0x58A86C0", VA = "0x58A96C0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLBaseAttribute.c (CustomLogic.CLBaseAttribute$$set_Name): clean
			this._Name_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002CD")]
	public bool Static
	{
		[Token(Token = "0x6001A83")]
		[Address(RVA = "0x58A96D0", Offset = "0x58A86D0", VA = "0x58A96D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLBaseAttribute.c (CustomLogic.CLBaseAttribute$$get_Static): clean
			return this._Static_k__BackingField;
		}
		[Token(Token = "0x6001A84")]
		[Address(RVA = "0x58A96E0", Offset = "0x58A86E0", VA = "0x58A96E0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLBaseAttribute.c (CustomLogic.CLBaseAttribute$$set_Static): clean
			this._Static_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170002CE")]
	public bool Hybrid
	{
		[Token(Token = "0x6001A85")]
		[Address(RVA = "0x58A96F0", Offset = "0x58A86F0", VA = "0x58A96F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLBaseAttribute.c (CustomLogic.CLBaseAttribute$$get_Hybrid): clean
			return this._Hybrid_k__BackingField;
		}
		[Token(Token = "0x6001A86")]
		[Address(RVA = "0x58A9700", Offset = "0x58A8700", VA = "0x58A9700")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLBaseAttribute.c (CustomLogic.CLBaseAttribute$$set_Hybrid): clean
			this._Hybrid_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x58A9710", Offset = "0x58A8710", VA = "0x58A9710")]
	protected CLBaseAttribute()
	{
		// Lifted from source/cpp/CustomLogic/CLBaseAttribute.c (CustomLogic.CLBaseAttribute$$.ctor): clean
		this._Name_k__BackingField = "";
		base();
		return;
	}
}
