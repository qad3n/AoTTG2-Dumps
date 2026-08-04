// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Tweening.GisketchMotionDriver
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Tweening;

[Token(Token = "0x2000016")]
public sealed class GisketchMotionDriver : MonoBehaviour
{
	[Token(Token = "0x2000017")]
	private sealed class ActiveTween
	{
		[Token(Token = "0x4000066")]
		[FieldOffset(Offset = "0x10")]
		public readonly Tween Tween;

		[Token(Token = "0x4000067")]
		[FieldOffset(Offset = "0x18")]
		public readonly bool BlocksInput;

		[Token(Token = "0x4000068")]
		[FieldOffset(Offset = "0x1C")]
		public readonly int CreatedFrame;

		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x3A33D10", Offset = "0x3A33D10", VA = "0x3A33D10")]
		public ActiveTween(Tween tween, bool blocksInput, int createdFrame)
		{
		}
	}

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x0")]
	private static GisketchMotionDriver _instance;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x8")]
	private static int _lastSkipFrame;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ActiveTween> _active;

	[Token(Token = "0x1700000D")]
	public static bool HasActive
	{
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x3A2C530", Offset = "0x3A2C530", VA = "0x3A2C530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000E")]
	public static bool ConsumedSkipThisFrame
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x3A2A170", Offset = "0x3A2A170", VA = "0x3A2A170")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x3A30510", Offset = "0x3A30510", VA = "0x3A30510")]
	public static Tween Track(Tween tween, bool blocksInput = true)
	{
		return null;
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x3A33EB0", Offset = "0x3A33EB0", VA = "0x3A33EB0")]
	private void Update()
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x3A2A1C0", Offset = "0x3A2A1C0", VA = "0x3A2A1C0")]
	public static bool CompleteActiveForSkip()
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x3A33D50", Offset = "0x3A33D50", VA = "0x3A33D50")]
	private static GisketchMotionDriver Ensure()
	{
		return null;
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x3A33F90", Offset = "0x3A33F90", VA = "0x3A33F90")]
	private static bool SkipPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x3A341D0", Offset = "0x3A341D0", VA = "0x3A341D0")]
	internal static bool IsKeyboardSkip(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3A34000", Offset = "0x3A34000", VA = "0x3A34000")]
	private void CompleteActive()
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x3A341E0", Offset = "0x3A341E0", VA = "0x3A341E0")]
	public GisketchMotionDriver()
	{
	}
}
