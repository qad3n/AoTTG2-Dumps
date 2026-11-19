// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgPopoverAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000076")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
public sealed class AottgPopoverAttribute : Attribute
{
	[Token(Token = "0x17000057")]
	public string Id
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x5262010", Offset = "0x5261010", VA = "0x5262010")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverAttribute.c (Gisketch.Aottg2UI.Code.AottgPopoverAttribute$$get_Id): clean
			return this._Id_k__BackingField;
		}
	}

	[Token(Token = "0x17000058")]
	public bool DismissOnBackdrop
	{
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x5262020", Offset = "0x5261020", VA = "0x5262020")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverAttribute.c (Gisketch.Aottg2UI.Code.AottgPopoverAttribute$$get_DismissOnBackdrop): clean
			return this._DismissOnBackdrop_k__BackingField;
		}
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x5262030", Offset = "0x5261030", VA = "0x5262030")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverAttribute.c (Gisketch.Aottg2UI.Code.AottgPopoverAttribute$$set_DismissOnBackdrop): clean
			this._DismissOnBackdrop_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000059")]
	public GisketchOverlayLifecycle Lifecycle
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x5262040", Offset = "0x5261040", VA = "0x5262040")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverAttribute.c (Gisketch.Aottg2UI.Code.AottgPopoverAttribute$$get_Lifecycle): clean
			return this._Lifecycle_k__BackingField;
		}
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x5262050", Offset = "0x5261050", VA = "0x5262050")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverAttribute.c (Gisketch.Aottg2UI.Code.AottgPopoverAttribute$$set_Lifecycle): clean
			this._Lifecycle_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x5261FE0", Offset = "0x5260FE0", VA = "0x5261FE0")]
	public AottgPopoverAttribute(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgPopoverAttribute.c (Gisketch.Aottg2UI.Code.AottgPopoverAttribute$$.ctor): clean
		base();
		this._Id_k__BackingField = id;
		return;
	}
}
