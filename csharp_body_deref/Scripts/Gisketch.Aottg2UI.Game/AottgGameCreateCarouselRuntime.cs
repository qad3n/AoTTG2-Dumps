// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001FB")]
internal sealed class AottgGameCreateCarouselRuntime : MonoBehaviour
{
	[Token(Token = "0x20001FC")]
	[CompilerGenerated]
	private sealed class _003CStart_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AA0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AA1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AA2")]
		[FieldOffset(Offset = "0x20")]
		public AottgGameCreateCarouselRuntime _003C_003E4__this;

		[Token(Token = "0x1700015B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BB7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700015C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BB9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CStart_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x23CD8C0", Offset = "0x23CBEC0", VA = "0x1823CD8C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x23CDCC0", Offset = "0x23CC2C0", VA = "0x1823CDCC0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000A98")]
	private const float EdgeWidth = 160f;

	[Token(Token = "0x4000A99")]
	private const float EdgeFadeDistance = 40f;

	[Token(Token = "0x4000A9A")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000A9B")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform[] _items;

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0x30")]
	private CanvasGroup[] _itemFades;

	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0x38")]
	private AottgGameCreateCarouselEdge _leftEdge;

	[Token(Token = "0x4000A9E")]
	[FieldOffset(Offset = "0x40")]
	private AottgGameCreateCarouselEdge _rightEdge;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0x48")]
	private int _selectedIndex;

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x23BFD00", Offset = "0x23BE300", VA = "0x1823BFD00")]
	public void Setup(ScrollRect scroll, int selectedIndex)
	{
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x23BF3C0", Offset = "0x23BD9C0", VA = "0x1823BF3C0")]
	private AottgGameCreateCarouselEdge CreateEdge(bool right)
	{
		return null;
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x23BFE40", Offset = "0x23BE440", VA = "0x1823BFE40")]
	[IteratorStateMachine(typeof(_003CStart_003Ed__10))]
	private IEnumerator Start()
	{
		return null;
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x23BF800", Offset = "0x23BDE00", VA = "0x1823BF800")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x23BF720", Offset = "0x23BDD20", VA = "0x1823BF720")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x23BF880", Offset = "0x23BDE80", VA = "0x1823BF880")]
	public void Reveal(RectTransform target)
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x23BFBA0", Offset = "0x23BE1A0", VA = "0x1823BFBA0")]
	private void SetOffset(float offset)
	{
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x23BF870", Offset = "0x23BDE70", VA = "0x1823BF870")]
	private void OnScroll(Vector2 position)
	{
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x23BFEB0", Offset = "0x23BE4B0", VA = "0x1823BFEB0")]
	private void UpdateEdges()
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x23C0540", Offset = "0x23BEB40", VA = "0x1823C0540")]
	private static float VisibilityAt(float position, Rect viewport, float leftOpacity, float rightOpacity)
	{
		return default(float);
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x23BF6D0", Offset = "0x23BDCD0", VA = "0x1823BF6D0")]
	private static float EdgeVisibility(float distance)
	{
		return default(float);
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgGameCreateCarouselRuntime()
	{
	}
}
