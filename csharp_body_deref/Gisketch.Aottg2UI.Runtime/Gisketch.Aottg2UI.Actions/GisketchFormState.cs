// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFormState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E9")]
public sealed class GisketchFormState : MonoBehaviour
{
	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, string> _baseline;

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x52A3880", Offset = "0x52A2880", VA = "0x52A3880")]
	public void CaptureBaseline()
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x52A39C0", Offset = "0x52A29C0", VA = "0x52A39C0")]
	public void ResetToBaseline()
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x52A3B00", Offset = "0x52A2B00", VA = "0x52A3B00")]
	public bool HasDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x52A3C30", Offset = "0x52A2C30", VA = "0x52A3C30")]
	public void SetDraft(string key, string value)
	{
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x52A3D20", Offset = "0x52A2D20", VA = "0x52A3D20")]
	public static void SetDraft(GameObject source, string key, string value)
	{
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x52A3EC0", Offset = "0x52A2EC0", VA = "0x52A3EC0")]
	public static bool IsDirty(GameObject root)
	{
		return default(bool);
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x52A3F80", Offset = "0x52A2F80", VA = "0x52A3F80")]
	public static void Reset(GameObject root)
	{
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x52A3DA0", Offset = "0x52A2DA0", VA = "0x52A3DA0")]
	private static GisketchFormState Find(GameObject source)
	{
		return null;
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x52A3980", Offset = "0x52A2980", VA = "0x52A3980")]
	private GisketchFormField[] Fields()
	{
		return null;
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x52A4040", Offset = "0x52A3040", VA = "0x52A4040")]
	public GisketchFormState()
	{
	}
}
