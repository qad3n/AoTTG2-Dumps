// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRuntime
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000216")]
internal sealed class AottgGameCreateCarouselRuntime : MonoBehaviour
{
	[Token(Token = "0x2000217")]
	[CompilerGenerated]
	private sealed class _003CStart_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B1D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B1E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B1F")]
		[FieldOffset(Offset = "0x20")]
		public AottgGameCreateCarouselRuntime _003C_003E4__this;

		[Token(Token = "0x17000164")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C7D")]
			[Address(RVA = "0x5D8CA80", Offset = "0x5D8BA80", VA = "0x5D8CA80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000165")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C7F")]
			[Address(RVA = "0x5D8CAD0", Offset = "0x5D8BAD0", VA = "0x5D8CAD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C7A")]
		[Address(RVA = "0x5D8B5C0", Offset = "0x5D8A5C0", VA = "0x5D8B5C0")]
		[DebuggerHidden]
		public _003CStart_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x5D8C660", Offset = "0x5D8B660", VA = "0x5D8C660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x5D8C670", Offset = "0x5D8B670", VA = "0x5D8C670", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x5D8CA90", Offset = "0x5D8BA90", VA = "0x5D8CA90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000B15")]
	private const float EdgeWidth = 160f;

	[Token(Token = "0x4000B16")]
	private const float EdgeFadeDistance = 40f;

	[Token(Token = "0x4000B17")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect _scroll;

	[Token(Token = "0x4000B18")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform[] _items;

	[Token(Token = "0x4000B19")]
	[FieldOffset(Offset = "0x30")]
	private CanvasGroup[] _itemFades;

	[Token(Token = "0x4000B1A")]
	[FieldOffset(Offset = "0x38")]
	private AottgGameCreateCarouselEdge _leftEdge;

	[Token(Token = "0x4000B1B")]
	[FieldOffset(Offset = "0x40")]
	private AottgGameCreateCarouselEdge _rightEdge;

	[Token(Token = "0x4000B1C")]
	[FieldOffset(Offset = "0x48")]
	private int _selectedIndex;

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x5D8B0E0", Offset = "0x5D8A0E0", VA = "0x5D8B0E0")]
	public void Setup(ScrollRect scroll, int selectedIndex)
	{
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x5D8B210", Offset = "0x5D8A210", VA = "0x5D8B210")]
	private AottgGameCreateCarouselEdge CreateEdge(bool right)
	{
		return null;
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x5D8B550", Offset = "0x5D8A550", VA = "0x5D8B550")]
	[IteratorStateMachine(typeof(_003CStart_003Ed__10))]
	private IEnumerator Start()
	{
		return null;
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x5D8B5E0", Offset = "0x5D8A5E0", VA = "0x5D8B5E0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x5D8BF90", Offset = "0x5D8AF90", VA = "0x5D8BF90")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x5D8C070", Offset = "0x5D8B070", VA = "0x5D8C070")]
	public void Reveal(RectTransform target)
	{
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x5D8C2A0", Offset = "0x5D8B2A0", VA = "0x5D8C2A0")]
	private void SetOffset(float offset)
	{
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x5D8C3E0", Offset = "0x5D8B3E0", VA = "0x5D8C3E0")]
	private void OnScroll(Vector2 position)
	{
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x5D8B650", Offset = "0x5D8A650", VA = "0x5D8B650")]
	private void UpdateEdges()
	{
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x5D8C4C0", Offset = "0x5D8B4C0", VA = "0x5D8C4C0")]
	private static float VisibilityAt(float position, Rect viewport, float leftOpacity, float rightOpacity)
	{
		return default(float);
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x5D8C5F0", Offset = "0x5D8B5F0", VA = "0x5D8C5F0")]
	private static float EdgeVisibility(float distance)
	{
		return default(float);
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x5D8C650", Offset = "0x5D8B650", VA = "0x5D8C650")]
	public AottgGameCreateCarouselRuntime()
	{
	}
}
