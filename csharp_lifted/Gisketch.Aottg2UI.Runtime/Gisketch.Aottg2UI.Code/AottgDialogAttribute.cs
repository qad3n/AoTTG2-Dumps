// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgDialogAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgDialogAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000075")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
public sealed class AottgDialogAttribute : Attribute
{
	[Token(Token = "0x17000053")]
	public string Id
	{
		[Token(Token = "0x6000395")]
		[Address(RVA = "0x5261F70", Offset = "0x5260F70", VA = "0x5261F70")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogAttribute.c (Gisketch.Aottg2UI.Code.AottgDialogAttribute$$get_Id): clean
			return this._Id_k__BackingField;
		}
	}

	[Token(Token = "0x17000054")]
	public bool Modal
	{
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x5261F80", Offset = "0x5260F80", VA = "0x5261F80")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogAttribute.c (Gisketch.Aottg2UI.Code.AottgDialogAttribute$$get_Modal): clean
			return this._Modal_k__BackingField;
		}
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x5261F90", Offset = "0x5260F90", VA = "0x5261F90")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogAttribute.c (Gisketch.Aottg2UI.Code.AottgDialogAttribute$$set_Modal): clean
			this._Modal_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000055")]
	public bool DismissOnBackdrop
	{
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x5261FA0", Offset = "0x5260FA0", VA = "0x5261FA0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogAttribute.c (Gisketch.Aottg2UI.Code.AottgDialogAttribute$$get_DismissOnBackdrop): clean
			return this._DismissOnBackdrop_k__BackingField;
		}
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x5261FB0", Offset = "0x5260FB0", VA = "0x5261FB0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogAttribute.c (Gisketch.Aottg2UI.Code.AottgDialogAttribute$$set_DismissOnBackdrop): clean
			this._DismissOnBackdrop_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000056")]
	public GisketchOverlayLifecycle Lifecycle
	{
		[Token(Token = "0x600039A")]
		[Address(RVA = "0x5261FC0", Offset = "0x5260FC0", VA = "0x5261FC0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogAttribute.c (Gisketch.Aottg2UI.Code.AottgDialogAttribute$$get_Lifecycle): clean
			return this._Lifecycle_k__BackingField;
		}
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x5261FD0", Offset = "0x5260FD0", VA = "0x5261FD0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogAttribute.c (Gisketch.Aottg2UI.Code.AottgDialogAttribute$$set_Lifecycle): clean
			this._Lifecycle_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x5261F30", Offset = "0x5260F30", VA = "0x5261F30")]
	public AottgDialogAttribute(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgDialogAttribute.c (Gisketch.Aottg2UI.Code.AottgDialogAttribute$$.ctor): clean
		this._Modal_k__BackingField = true;
		this._DismissOnBackdrop_k__BackingField = true;
		base();
		this._Id_k__BackingField = id;
		return;
	}
}
