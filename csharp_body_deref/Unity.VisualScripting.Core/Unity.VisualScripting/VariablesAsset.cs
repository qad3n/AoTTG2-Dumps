using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20001DA")]
[IncludeInSettings(false)]
public sealed class VariablesAsset : LudiqScriptableObject
{
	[Token(Token = "0x170001F5")]
	[Serialize]
	[Inspectable]
	[InspectorWide(true)]
	public VariableDeclarations declarations
	{
		[Token(Token = "0x600115A")]
		[Address(RVA = "0x4A43BC0", Offset = "0x4A43BC0", VA = "0x4A43BC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600115B")]
		[Address(RVA = "0x4A43BD0", Offset = "0x4A43BD0", VA = "0x4A43BD0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x600115C")]
	[Address(RVA = "0x4A43BE0", Offset = "0x4A43BE0", VA = "0x4A43BE0", Slot = "11")]
	[ContextMenu("Show Data...")]
	protected override void ShowData()
	{
	}

	[Token(Token = "0x600115D")]
	[Address(RVA = "0x4A43BF0", Offset = "0x4A43BF0", VA = "0x4A43BF0")]
	public VariablesAsset()
	{
	}
}
