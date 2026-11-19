// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchFormField
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20000E7")]
public sealed class GisketchFormField : MonoBehaviour
{
	[Token(Token = "0x40004B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Func<string> _read;

	[Token(Token = "0x40004BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string _value;

	[Token(Token = "0x170000B0")]
	public string Key
	{
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x52A32F0", Offset = "0x52A22F0", VA = "0x52A32F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x52A3300", Offset = "0x52A2300", VA = "0x52A3300")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public string Label
	{
		[Token(Token = "0x600072C")]
		[Address(RVA = "0x52A3310", Offset = "0x52A2310", VA = "0x52A3310")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600072D")]
		[Address(RVA = "0x52A3320", Offset = "0x52A2320", VA = "0x52A3320")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x52A3330", Offset = "0x52A2330", VA = "0x52A3330")]
	public static void Attach(GameObject go, GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x52A3630", Offset = "0x52A2630", VA = "0x52A3630")]
	public void Setup(string key, string label, Func<string> read, [Optional] string value)
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x52A36C0", Offset = "0x52A26C0", VA = "0x52A36C0")]
	public string CurrentValue()
	{
		return null;
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x52A3770", Offset = "0x52A2770", VA = "0x52A3770")]
	public void SetValue(string value)
	{
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x52A34B0", Offset = "0x52A24B0", VA = "0x52A34B0")]
	private static Func<string> Reader(GameObject go, GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x52A37C0", Offset = "0x52A27C0", VA = "0x52A37C0")]
	public GisketchFormField()
	{
	}
}
