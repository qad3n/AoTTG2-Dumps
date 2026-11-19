// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSubtab
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSubtab.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001F9")]
public sealed class AottgSubtab
{
	[Token(Token = "0x17000154")]
	public string Id
	{
		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x5D7DE70", Offset = "0x5D7CE70", VA = "0x5D7DE70")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtab.c (Gisketch.Aottg2UI.Game.AottgSubtab$$get_Id): clean
			return this._Id_k__BackingField;
		}
	}

	[Token(Token = "0x17000155")]
	public string Label
	{
		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x5D7DE80", Offset = "0x5D7CE80", VA = "0x5D7DE80")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtab.c (Gisketch.Aottg2UI.Game.AottgSubtab$$get_Label): clean
			return this._Label_k__BackingField;
		}
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x5D7DDE0", Offset = "0x5D7CDE0", VA = "0x5D7DDE0")]
	public AottgSubtab(string id, string label)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtab.c (Gisketch.Aottg2UI.Game.AottgSubtab$$.ctor): clean
		base();
		if (id == null) {
			id = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._Id_k__BackingField = id;
		if (label == null) {
			label = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._Label_k__BackingField = label;
		return;
	}
}
