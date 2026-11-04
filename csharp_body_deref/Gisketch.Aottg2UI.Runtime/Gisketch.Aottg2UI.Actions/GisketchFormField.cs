// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFormField
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchFormField.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000E1")]
public sealed class GisketchFormField : MonoBehaviour
{
	[Token(Token = "0x4000492")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Func<string> _read;

	[Token(Token = "0x4000493")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _value;

	[Token(Token = "0x170000B0")]
	public string Key
	{
		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public string Label
	{
		[Token(Token = "0x60006DE")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60006DF")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x1900D70", Offset = "0x18FF370", VA = "0x181900D70")]
	public static void Attach(GameObject go, GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x1901280", Offset = "0x18FF880", VA = "0x181901280")]
	public void Setup(string key, string label, Func<string> read, [Optional] string value)
	{
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x1901050", Offset = "0x18FF650", VA = "0x181901050")]
	public string CurrentValue()
	{
		return null;
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x1901240", Offset = "0x18FF840", VA = "0x181901240")]
	public void SetValue(string value)
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x19010A0", Offset = "0x18FF6A0", VA = "0x1819010A0")]
	private static Func<string> Reader(GameObject go, GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GisketchFormField()
	{
	}
}
