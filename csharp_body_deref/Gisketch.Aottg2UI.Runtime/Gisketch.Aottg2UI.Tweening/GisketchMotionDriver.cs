// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Tweening.GisketchMotionDriver
// Update status: CHANGED in this game update
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
		[Token(Token = "0x4000090")]
		[FieldOffset(Offset = "0x10")]
		public readonly Tween Tween;

		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x18")]
		public readonly bool BlocksInput;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x1C")]
		public readonly int CreatedFrame;

		[Token(Token = "0x6000118")]
		[Address(RVA = "0x1882DE0", Offset = "0x18813E0", VA = "0x181882DE0")]
		public ActiveTween(Tween tween, bool blocksInput, int createdFrame)
		{
		}
	}

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x0")]
	private static GisketchMotionDriver _instance;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x8")]
	private static int _lastSkipFrame;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ActiveTween> _active;

	[Token(Token = "0x1700001B")]
	public static bool HasActive
	{
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x1886340", Offset = "0x1884940", VA = "0x181886340")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001C")]
	public static bool ConsumedSkipThisFrame
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x18862E0", Offset = "0x18848E0", VA = "0x1818862E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x1885DF0", Offset = "0x18843F0", VA = "0x181885DF0")]
	public static Tween Track(Tween tween, bool blocksInput = true)
	{
		return null;
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x1886160", Offset = "0x1884760", VA = "0x181886160")]
	private void Update()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x1885760", Offset = "0x1883D60", VA = "0x181885760")]
	public static bool CompleteActiveForSkip()
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x1885BE0", Offset = "0x18841E0", VA = "0x181885BE0")]
	private static GisketchMotionDriver Ensure()
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x1885D80", Offset = "0x1884380", VA = "0x181885D80")]
	private static bool SkipPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x1885D50", Offset = "0x1884350", VA = "0x181885D50")]
	internal static bool IsBackKeyDown()
	{
		return default(bool);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x1885D70", Offset = "0x1884370", VA = "0x181885D70")]
	internal static bool IsKeyboardSkip(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x1885A20", Offset = "0x1884020", VA = "0x181885A20")]
	private void CompleteActive()
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x1886260", Offset = "0x1884860", VA = "0x181886260")]
	public GisketchMotionDriver()
	{
	}
}
