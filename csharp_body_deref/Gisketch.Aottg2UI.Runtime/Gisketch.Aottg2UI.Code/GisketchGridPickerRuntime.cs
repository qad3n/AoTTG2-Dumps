using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Diagnostics;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000075")]
public sealed class GisketchGridPickerRuntime : MonoBehaviour
{
	[Token(Token = "0x2000076")]
	private readonly struct ThumbnailLoad
	{
		[Token(Token = "0x4000269")]
		[FieldOffset(Offset = "0x0")]
		public readonly Image Image;

		[Token(Token = "0x400026A")]
		[FieldOffset(Offset = "0x8")]
		public readonly string ResourcePath;

		[Token(Token = "0x400026B")]
		[FieldOffset(Offset = "0x10")]
		public readonly int Generation;

		[Token(Token = "0x600032C")]
		[Address(RVA = "0x39FCED0", Offset = "0x39FCED0", VA = "0x39FCED0")]
		public ThumbnailLoad(Image image, string resourcePath, int generation)
		{
		}
	}

	[Token(Token = "0x2000079")]
	[CompilerGenerated]
	private sealed class _003CBuildCards_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000270")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000271")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000272")]
		[FieldOffset(Offset = "0x20")]
		public GisketchGridPickerRuntime _003C_003E4__this;

		[Token(Token = "0x4000273")]
		[FieldOffset(Offset = "0x28")]
		private GisketchUiPerfLog.Scope _003C_003E7__wrap1;

		[Token(Token = "0x4000274")]
		[FieldOffset(Offset = "0x48")]
		private int _003Cbuilt_003E5__3;

		[Token(Token = "0x4000275")]
		[FieldOffset(Offset = "0x50")]
		private List<GisketchGridPickerItem>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x17000065")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000336")]
			[Address(RVA = "0x39FDC20", Offset = "0x39FDC20", VA = "0x39FDC20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000066")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000338")]
			[Address(RVA = "0x39FDC70", Offset = "0x39FDC70", VA = "0x39FDC70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000331")]
		[Address(RVA = "0x39FB0B0", Offset = "0x39FB0B0", VA = "0x39FB0B0")]
		[DebuggerHidden]
		public _003CBuildCards_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000332")]
		[Address(RVA = "0x39FD410", Offset = "0x39FD410", VA = "0x39FD410", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000333")]
		[Address(RVA = "0x39FD4F0", Offset = "0x39FD4F0", VA = "0x39FD4F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000334")]
		[Address(RVA = "0x39FDC00", Offset = "0x39FDC00", VA = "0x39FDC00")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000335")]
		[Address(RVA = "0x39FDBC0", Offset = "0x39FDBC0", VA = "0x39FDBC0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000337")]
		[Address(RVA = "0x39FDC30", Offset = "0x39FDC30", VA = "0x39FDC30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200007A")]
	[CompilerGenerated]
	private sealed class _003CLoadThumbnails_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000276")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000277")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000278")]
		[FieldOffset(Offset = "0x20")]
		public GisketchGridPickerRuntime _003C_003E4__this;

		[Token(Token = "0x4000279")]
		[FieldOffset(Offset = "0x28")]
		public int generation;

		[Token(Token = "0x400027A")]
		[FieldOffset(Offset = "0x2C")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x400027B")]
		[FieldOffset(Offset = "0x30")]
		private ThumbnailLoad _003Cload_003E5__3;

		[Token(Token = "0x400027C")]
		[FieldOffset(Offset = "0x48")]
		private ResourceRequest _003Crequest_003E5__4;

		[Token(Token = "0x17000067")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600033C")]
			[Address(RVA = "0x39FE070", Offset = "0x39FE070", VA = "0x39FE070", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000068")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600033E")]
			[Address(RVA = "0x39FE0C0", Offset = "0x39FE0C0", VA = "0x39FE0C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000339")]
		[Address(RVA = "0x39FCF00", Offset = "0x39FCF00", VA = "0x39FCF00")]
		[DebuggerHidden]
		public _003CLoadThumbnails_003Ed__23(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600033A")]
		[Address(RVA = "0x39FDC80", Offset = "0x39FDC80", VA = "0x39FDC80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600033B")]
		[Address(RVA = "0x39FDC90", Offset = "0x39FDC90", VA = "0x39FDC90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600033D")]
		[Address(RVA = "0x39FE080", Offset = "0x39FE080", VA = "0x39FE080", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400025D")]
	private const int ImmediateItems = 24;

	[Token(Token = "0x400025E")]
	private const int BatchSize = 12;

	[Token(Token = "0x400025F")]
	private const float Gap = 10f;

	[Token(Token = "0x4000260")]
	private const float ThumbnailFadeSeconds = 0.12f;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x20")]
	private GisketchGridPicker.RuntimeDefinition _definition;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x28")]
	private GisketchTheme _theme;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<GameObject> _cards;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<ThumbnailLoad> _thumbnailLoads;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x40")]
	private string _query;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x48")]
	private Coroutine _build;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x50")]
	private Coroutine _thumbnailLoader;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x58")]
	private int _thumbnailGeneration;

	[Token(Token = "0x17000064")]
	public string Id
	{
		[Token(Token = "0x600031A")]
		[Address(RVA = "0x39FA1A0", Offset = "0x39FA1A0", VA = "0x39FA1A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x39F9860", Offset = "0x39F9860", VA = "0x39F9860")]
	internal void Setup(GisketchGridPicker.RuntimeDefinition definition, GisketchTheme theme)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x39FA1D0", Offset = "0x39FA1D0", VA = "0x39FA1D0")]
	public void SetQuery(string query)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x39FAA00", Offset = "0x39FAA00", VA = "0x39FAA00")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x39FAFC0", Offset = "0x39FAFC0", VA = "0x39FAFC0")]
	[IteratorStateMachine(typeof(_003CBuildCards_003Ed__17))]
	private IEnumerator BuildCards()
	{
		return null;
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x39FB0D0", Offset = "0x39FB0D0", VA = "0x39FB0D0")]
	private List<GisketchGridPickerItem> FilteredItems()
	{
		return null;
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x39FB3B0", Offset = "0x39FB3B0", VA = "0x39FB3B0")]
	private void UpdateHeight(int count)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x39FB510", Offset = "0x39FB510", VA = "0x39FB510")]
	private void CreateCard(GisketchGridPickerItem item, int index)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x39FC430", Offset = "0x39FC430", VA = "0x39FC430")]
	private void BuildThumbnail(Transform parent, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x39FCD70", Offset = "0x39FCD70", VA = "0x39FCD70")]
	private void QueueThumbnail(Image image, string resourcePath, int generation)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x39FB030", Offset = "0x39FB030", VA = "0x39FB030")]
	[IteratorStateMachine(typeof(_003CLoadThumbnails_003Ed__23))]
	private IEnumerator LoadThumbnails(int generation)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x39FCF20", Offset = "0x39FCF20", VA = "0x39FCF20")]
	private static void ShowLoaded(Image image, Sprite sprite)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x39FCFE0", Offset = "0x39FCFE0", VA = "0x39FCFE0")]
	private static void FadeIn(Image image)
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x39FCA60", Offset = "0x39FCA60", VA = "0x39FCA60")]
	private void BuildLabel(Transform parent, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x39FC330", Offset = "0x39FC330", VA = "0x39FC330")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x39FC2A0", Offset = "0x39FC2A0", VA = "0x39FC2A0")]
	private static string SafeId(string value)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x39FA9E0", Offset = "0x39FA9E0", VA = "0x39FA9E0")]
	private int ItemCount()
	{
		return default(int);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x39FD190", Offset = "0x39FD190", VA = "0x39FD190")]
	public GisketchGridPickerRuntime()
	{
	}
}
