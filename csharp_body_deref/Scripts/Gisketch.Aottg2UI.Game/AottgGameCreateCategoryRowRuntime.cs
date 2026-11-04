// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRowRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gilzoide.FlexUi;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000200")]
internal sealed class AottgGameCreateCategoryRowRuntime : MonoBehaviour
{
	[Token(Token = "0x2000201")]
	[CompilerGenerated]
	private sealed class _003CStart_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AB9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000ABA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000ABB")]
		[FieldOffset(Offset = "0x20")]
		public AottgGameCreateCategoryRowRuntime _003C_003E4__this;

		[Token(Token = "0x1700015D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BD4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700015E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BD6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BD1")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CStart_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BD2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BD3")]
		[Address(RVA = "0x23CDD00", Offset = "0x23CC300", VA = "0x1823CDD00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x23CDD70", Offset = "0x23CC370", VA = "0x1823CDD70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000AAE")]
	private const float MinRowScaleGain = 1.1f;

	[Token(Token = "0x4000AAF")]
	private const float MinWrapScale = 0.5f;

	[Token(Token = "0x4000AB0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3[] Corners;

	[Token(Token = "0x4000AB1")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _content;

	[Token(Token = "0x4000AB2")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _sidePanel;

	[Token(Token = "0x4000AB3")]
	[FieldOffset(Offset = "0x30")]
	private FlexLayout _flex;

	[Token(Token = "0x4000AB4")]
	[FieldOffset(Offset = "0x38")]
	private FlexLayout _contentFlex;

	[Token(Token = "0x4000AB5")]
	[FieldOffset(Offset = "0x40")]
	private int _count;

	[Token(Token = "0x4000AB6")]
	[FieldOffset(Offset = "0x44")]
	private float _height;

	[Token(Token = "0x4000AB7")]
	[FieldOffset(Offset = "0x48")]
	private float _gap;

	[Token(Token = "0x4000AB8")]
	[FieldOffset(Offset = "0x4C")]
	private bool _wrap;

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x23C13D0", Offset = "0x23BF9D0", VA = "0x1823C13D0")]
	public void Setup(RectTransform content, int count, float height, float gap, bool wrap)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x23C14D0", Offset = "0x23BFAD0", VA = "0x1823C14D0")]
	internal static float SpanLength(int count, float size, float gap)
	{
		return default(float);
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x23C11F0", Offset = "0x23BF7F0", VA = "0x1823C11F0")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x23C1500", Offset = "0x23BFB00", VA = "0x1823C1500")]
	[IteratorStateMachine(typeof(_003CStart_003Ed__14))]
	private IEnumerator Start()
	{
		return null;
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x23C0690", Offset = "0x23BEC90", VA = "0x1823C0690")]
	private void Apply()
	{
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x23C1570", Offset = "0x23BFB70", VA = "0x1823C1570")]
	private int WrapColumns(float width)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x23C1200", Offset = "0x23BF800", VA = "0x1823C1200")]
	private int Rows(int columns)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x23C1270", Offset = "0x23BF870", VA = "0x1823C1270")]
	private float Scale(int columns, float width, float availableHeight)
	{
		return default(float);
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x23C0E90", Offset = "0x23BF490", VA = "0x1823C0E90")]
	private float AvailableHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgGameCreateCategoryRowRuntime()
	{
	}
}
