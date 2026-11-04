// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFormState
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E3")]
public sealed class GisketchFormState : MonoBehaviour
{
	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, string> _baseline;

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x1901310", Offset = "0x18FF910", VA = "0x181901310")]
	public void CaptureBaseline()
	{
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x19018D0", Offset = "0x18FFED0", VA = "0x1819018D0")]
	public void ResetToBaseline()
	{
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x19015A0", Offset = "0x18FFBA0", VA = "0x1819015A0")]
	public bool HasDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x1901BB0", Offset = "0x19001B0", VA = "0x181901BB0")]
	public void SetDraft(string key, string value)
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x1901CB0", Offset = "0x19002B0", VA = "0x181901CB0")]
	public static void SetDraft(GameObject source, string key, string value)
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x19016E0", Offset = "0x18FFCE0", VA = "0x1819016E0")]
	public static bool IsDirty(GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x19019F0", Offset = "0x18FFFF0", VA = "0x1819019F0")]
	public static void Reset(GameObject root)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x1901460", Offset = "0x18FFA60", VA = "0x181901460")]
	private static GisketchFormState Find(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x1901420", Offset = "0x18FFA20", VA = "0x181901420")]
	private GisketchFormField[] Fields()
	{
		return null;
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x1901F00", Offset = "0x1900500", VA = "0x181901F00")]
	public GisketchFormState()
	{
	}
}
