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

[Token(Token = "0x200001F")]
public sealed class GisketchMotionDriver : MonoBehaviour
{
	[Token(Token = "0x2000020")]
	private sealed class ActiveTween
	{
		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x10")]
		public readonly Tween Tween;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x18")]
		public readonly bool BlocksInput;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x1C")]
		public readonly int CreatedFrame;

		[Token(Token = "0x6000119")]
		[Address(RVA = "0x522AA40", Offset = "0x5229A40", VA = "0x522AA40")]
		public ActiveTween(Tween tween, bool blocksInput, int createdFrame)
		{
		}
	}

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x0")]
	private static GisketchMotionDriver _instance;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x8")]
	private static int _lastSkipFrame;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ActiveTween> _active;

	[Token(Token = "0x1700001B")]
	public static bool HasActive
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x521AAF0", Offset = "0x5219AF0", VA = "0x521AAF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001C")]
	public static bool ConsumedSkipThisFrame
	{
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x521BF30", Offset = "0x521AF30", VA = "0x521BF30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x5226780", Offset = "0x5225780", VA = "0x5226780")]
	public static Tween Track(Tween tween, bool blocksInput = true)
	{
		return null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x522ABE0", Offset = "0x5229BE0", VA = "0x522ABE0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x521BF80", Offset = "0x521AF80", VA = "0x521BF80")]
	public static bool CompleteActiveForSkip()
	{
		return default(bool);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x522AA80", Offset = "0x5229A80", VA = "0x522AA80")]
	private static GisketchMotionDriver Ensure()
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x522ACC0", Offset = "0x5229CC0", VA = "0x522ACC0")]
	private static bool SkipPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x521BF20", Offset = "0x521AF20", VA = "0x521BF20")]
	internal static bool IsBackKeyDown()
	{
		return default(bool);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x522AF00", Offset = "0x5229F00", VA = "0x522AF00")]
	internal static bool IsKeyboardSkip(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x522AD30", Offset = "0x5229D30", VA = "0x522AD30")]
	private void CompleteActive()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x522AF10", Offset = "0x5229F10", VA = "0x522AF10")]
	public GisketchMotionDriver()
	{
	}
}
