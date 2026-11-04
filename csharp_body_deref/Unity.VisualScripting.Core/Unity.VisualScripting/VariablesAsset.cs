// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.VariablesAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20001DA")]
[IncludeInSettings(false)]
public sealed class VariablesAsset : LudiqScriptableObject
{
	[Token(Token = "0x170001F8")]
	[Serialize]
	[Inspectable]
	[InspectorWide(true)]
	public VariableDeclarations declarations
	{
		[Token(Token = "0x6001167")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001168")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x2E5B5A0", Offset = "0x2E59BA0", VA = "0x182E5B5A0", Slot = "11")]
	[ContextMenu("Show Data...")]
	protected override void ShowData()
	{
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x2E5B5B0", Offset = "0x2E59BB0", VA = "0x182E5B5B0")]
	public VariablesAsset()
	{
	}
}
