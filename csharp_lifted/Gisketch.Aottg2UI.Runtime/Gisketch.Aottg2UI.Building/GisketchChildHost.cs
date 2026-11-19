// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Building.GisketchChildHost
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Building/GisketchChildHost.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Building;

[Token(Token = "0x20000A8")]
internal sealed class GisketchChildHost : MonoBehaviour
{
	[Token(Token = "0x17000098")]
	public Transform Parent
	{
		[Token(Token = "0x600052F")]
		[Address(RVA = "0x527B660", Offset = "0x527A660", VA = "0x527B660")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchChildHost.c (Gisketch.Aottg2UI.Building.GisketchChildHost$$get_Parent): clean
			return this._Parent_k__BackingField;
		}
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x527B670", Offset = "0x527A670", VA = "0x527B670")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchChildHost.c (Gisketch.Aottg2UI.Building.GisketchChildHost$$set_Parent): clean
			this._Parent_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x527B680", Offset = "0x527A680", VA = "0x527B680")]
	public void Setup(Transform parent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchChildHost.c (Gisketch.Aottg2UI.Building.GisketchChildHost$$Setup): clean
		this._Parent_k__BackingField = parent;
		return;
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x527B690", Offset = "0x527A690", VA = "0x527B690")]
	public GisketchChildHost()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Building/GisketchChildHost.c (Gisketch.Aottg2UI.Building.GisketchChildHost$$.ctor): clean
		base();
		return;
	}
}
