// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLMethodAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLMethodAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200044A")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Method)]
internal class CLMethodAttribute : CLBaseAttribute
{
	[Token(Token = "0x170002D1")]
	public string[] ReturnTypeArguments
	{
		[Token(Token = "0x6001A8D")]
		[Address(RVA = "0x58A9820", Offset = "0x58A8820", VA = "0x58A9820")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CLMethodAttribute.c (CustomLogic.CLMethodAttribute$$get_ReturnTypeArguments): clean
			return this._ReturnTypeArguments_k__BackingField;
		}
		[Token(Token = "0x6001A8E")]
		[Address(RVA = "0x58A9830", Offset = "0x58A8830", VA = "0x58A9830")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CLMethodAttribute.c (CustomLogic.CLMethodAttribute$$set_ReturnTypeArguments): clean
			this._ReturnTypeArguments_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x58A9840", Offset = "0x58A8840", VA = "0x58A9840")]
	public CLMethodAttribute()
	{
		// Lifted from source/cpp/CustomLogic/CLMethodAttribute.c (CustomLogic.CLMethodAttribute$$.ctor): clean
		this._Name_k__BackingField = "";
		base();
		return;
	}
}
