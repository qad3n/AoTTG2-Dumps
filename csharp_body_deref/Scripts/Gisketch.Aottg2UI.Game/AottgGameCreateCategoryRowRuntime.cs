// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRowRuntime
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200021B")]
internal sealed class AottgGameCreateCategoryRowRuntime : MonoBehaviour
{
	[Token(Token = "0x200021C")]
	[CompilerGenerated]
	private sealed class _003CStart_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B36")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B37")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B38")]
		[FieldOffset(Offset = "0x20")]
		public AottgGameCreateCategoryRowRuntime _003C_003E4__this;

		[Token(Token = "0x17000166")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C9A")]
			[Address(RVA = "0x5D8E700", Offset = "0x5D8D700", VA = "0x5D8E700", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000167")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C9C")]
			[Address(RVA = "0x5D8E750", Offset = "0x5D8D750", VA = "0x5D8E750", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C97")]
		[Address(RVA = "0x5D8DF10", Offset = "0x5D8CF10", VA = "0x5D8DF10")]
		[DebuggerHidden]
		public _003CStart_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C98")]
		[Address(RVA = "0x5D8E690", Offset = "0x5D8D690", VA = "0x5D8E690", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C99")]
		[Address(RVA = "0x5D8E6A0", Offset = "0x5D8D6A0", VA = "0x5D8E6A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C9B")]
		[Address(RVA = "0x5D8E710", Offset = "0x5D8D710", VA = "0x5D8E710", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000B2B")]
	private const float MinRowScaleGain = 1.1f;

	[Token(Token = "0x4000B2C")]
	private const float MinWrapScale = 0.5f;

	[Token(Token = "0x4000B2D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Vector3[] Corners;

	[Token(Token = "0x4000B2E")]
	[FieldOffset(Offset = "0x20")]
	private RectTransform _content;

	[Token(Token = "0x4000B2F")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _sidePanel;

	[Token(Token = "0x4000B30")]
	[FieldOffset(Offset = "0x30")]
	private FlexLayout _flex;

	[Token(Token = "0x4000B31")]
	[FieldOffset(Offset = "0x38")]
	private FlexLayout _contentFlex;

	[Token(Token = "0x4000B32")]
	[FieldOffset(Offset = "0x40")]
	private int _count;

	[Token(Token = "0x4000B33")]
	[FieldOffset(Offset = "0x44")]
	private float _height;

	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x48")]
	private float _gap;

	[Token(Token = "0x4000B35")]
	[FieldOffset(Offset = "0x4C")]
	private bool _wrap;

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x5D8D3B0", Offset = "0x5D8C3B0", VA = "0x5D8D3B0")]
	public void Setup(RectTransform content, int count, float height, float gap, bool wrap)
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x5D8D870", Offset = "0x5D8C870", VA = "0x5D8D870")]
	internal static float SpanLength(int count, float size, float gap)
	{
		return default(float);
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x5D8DE90", Offset = "0x5D8CE90", VA = "0x5D8DE90")]
	private void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x5D8DEA0", Offset = "0x5D8CEA0", VA = "0x5D8DEA0")]
	[IteratorStateMachine(typeof(_003CStart_003Ed__14))]
	private IEnumerator Start()
	{
		return null;
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x5D8D890", Offset = "0x5D8C890", VA = "0x5D8D890")]
	private void Apply()
	{
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x5D8DF30", Offset = "0x5D8CF30", VA = "0x5D8DF30")]
	private int WrapColumns(float width)
	{
		return default(int);
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x5D8E5A0", Offset = "0x5D8D5A0", VA = "0x5D8E5A0")]
	private int Rows(int columns)
	{
		return default(int);
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x5D8E410", Offset = "0x5D8D410", VA = "0x5D8E410")]
	private float Scale(int columns, float width, float availableHeight)
	{
		return default(float);
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x5D8E110", Offset = "0x5D8D110", VA = "0x5D8E110")]
	private float AvailableHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x5D8E610", Offset = "0x5D8D610", VA = "0x5D8E610")]
	public AottgGameCreateCategoryRowRuntime()
	{
	}
}
