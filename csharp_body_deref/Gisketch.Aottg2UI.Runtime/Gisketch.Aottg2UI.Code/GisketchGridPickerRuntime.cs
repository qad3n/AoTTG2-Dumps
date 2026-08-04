// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchGridPickerRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x2000077")]
public sealed class GisketchGridPickerRuntime : MonoBehaviour
{
	[Token(Token = "0x2000078")]
	private readonly struct ThumbnailLoad
	{
		[Token(Token = "0x4000271")]
		[FieldOffset(Offset = "0x0")]
		public readonly Image Image;

		[Token(Token = "0x4000272")]
		[FieldOffset(Offset = "0x8")]
		public readonly string ResourcePath;

		[Token(Token = "0x4000273")]
		[FieldOffset(Offset = "0x10")]
		public readonly int Generation;

		[Token(Token = "0x600033C")]
		[Address(RVA = "0x3A68020", Offset = "0x3A68020", VA = "0x3A68020")]
		public ThumbnailLoad(Image image, string resourcePath, int generation)
		{
		}
	}

	[Token(Token = "0x200007B")]
	[CompilerGenerated]
	private sealed class _003CBuildCards_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000278")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000279")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400027A")]
		[FieldOffset(Offset = "0x20")]
		public GisketchGridPickerRuntime _003C_003E4__this;

		[Token(Token = "0x400027B")]
		[FieldOffset(Offset = "0x28")]
		private GisketchUiPerfLog.Scope _003C_003E7__wrap1;

		[Token(Token = "0x400027C")]
		[FieldOffset(Offset = "0x48")]
		private int _003Cbuilt_003E5__3;

		[Token(Token = "0x400027D")]
		[FieldOffset(Offset = "0x50")]
		private List<GisketchGridPickerItem>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x17000067")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000346")]
			[Address(RVA = "0x3A68D70", Offset = "0x3A68D70", VA = "0x3A68D70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000068")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000348")]
			[Address(RVA = "0x3A68DC0", Offset = "0x3A68DC0", VA = "0x3A68DC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000341")]
		[Address(RVA = "0x3A66200", Offset = "0x3A66200", VA = "0x3A66200")]
		[DebuggerHidden]
		public _003CBuildCards_003Ed__17(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000342")]
		[Address(RVA = "0x3A68560", Offset = "0x3A68560", VA = "0x3A68560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000343")]
		[Address(RVA = "0x3A68640", Offset = "0x3A68640", VA = "0x3A68640", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000344")]
		[Address(RVA = "0x3A68D50", Offset = "0x3A68D50", VA = "0x3A68D50")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000345")]
		[Address(RVA = "0x3A68D10", Offset = "0x3A68D10", VA = "0x3A68D10")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000347")]
		[Address(RVA = "0x3A68D80", Offset = "0x3A68D80", VA = "0x3A68D80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200007C")]
	[CompilerGenerated]
	private sealed class _003CLoadThumbnails_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400027E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400027F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000280")]
		[FieldOffset(Offset = "0x20")]
		public GisketchGridPickerRuntime _003C_003E4__this;

		[Token(Token = "0x4000281")]
		[FieldOffset(Offset = "0x28")]
		public int generation;

		[Token(Token = "0x4000282")]
		[FieldOffset(Offset = "0x2C")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x4000283")]
		[FieldOffset(Offset = "0x30")]
		private ThumbnailLoad _003Cload_003E5__3;

		[Token(Token = "0x4000284")]
		[FieldOffset(Offset = "0x48")]
		private ResourceRequest _003Crequest_003E5__4;

		[Token(Token = "0x17000069")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600034C")]
			[Address(RVA = "0x3A691C0", Offset = "0x3A691C0", VA = "0x3A691C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700006A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600034E")]
			[Address(RVA = "0x3A69210", Offset = "0x3A69210", VA = "0x3A69210", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000349")]
		[Address(RVA = "0x3A68050", Offset = "0x3A68050", VA = "0x3A68050")]
		[DebuggerHidden]
		public _003CLoadThumbnails_003Ed__23(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600034A")]
		[Address(RVA = "0x3A68DD0", Offset = "0x3A68DD0", VA = "0x3A68DD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600034B")]
		[Address(RVA = "0x3A68DE0", Offset = "0x3A68DE0", VA = "0x3A68DE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600034D")]
		[Address(RVA = "0x3A691D0", Offset = "0x3A691D0", VA = "0x3A691D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000265")]
	private const int ImmediateItems = 24;

	[Token(Token = "0x4000266")]
	private const int BatchSize = 12;

	[Token(Token = "0x4000267")]
	private const float Gap = 10f;

	[Token(Token = "0x4000268")]
	private const float ThumbnailFadeSeconds = 0.12f;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x20")]
	private GisketchGridPicker.RuntimeDefinition _definition;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x28")]
	private GisketchTheme _theme;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<GameObject> _cards;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<ThumbnailLoad> _thumbnailLoads;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x40")]
	private string _query;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x48")]
	private Coroutine _build;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x50")]
	private Coroutine _thumbnailLoader;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x58")]
	private int _thumbnailGeneration;

	[Token(Token = "0x17000066")]
	public string Id
	{
		[Token(Token = "0x600032A")]
		[Address(RVA = "0x3A652F0", Offset = "0x3A652F0", VA = "0x3A652F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x3A649B0", Offset = "0x3A649B0", VA = "0x3A649B0")]
	internal void Setup(GisketchGridPicker.RuntimeDefinition definition, GisketchTheme theme)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x3A65320", Offset = "0x3A65320", VA = "0x3A65320")]
	public void SetQuery(string query)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x3A65B50", Offset = "0x3A65B50", VA = "0x3A65B50")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x3A66110", Offset = "0x3A66110", VA = "0x3A66110")]
	[IteratorStateMachine(typeof(_003CBuildCards_003Ed__17))]
	private IEnumerator BuildCards()
	{
		return null;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x3A66220", Offset = "0x3A66220", VA = "0x3A66220")]
	private List<GisketchGridPickerItem> FilteredItems()
	{
		return null;
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x3A66500", Offset = "0x3A66500", VA = "0x3A66500")]
	private void UpdateHeight(int count)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x3A66660", Offset = "0x3A66660", VA = "0x3A66660")]
	private void CreateCard(GisketchGridPickerItem item, int index)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x3A67580", Offset = "0x3A67580", VA = "0x3A67580")]
	private void BuildThumbnail(Transform parent, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x3A67EC0", Offset = "0x3A67EC0", VA = "0x3A67EC0")]
	private void QueueThumbnail(Image image, string resourcePath, int generation)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x3A66180", Offset = "0x3A66180", VA = "0x3A66180")]
	[IteratorStateMachine(typeof(_003CLoadThumbnails_003Ed__23))]
	private IEnumerator LoadThumbnails(int generation)
	{
		return null;
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x3A68070", Offset = "0x3A68070", VA = "0x3A68070")]
	private static void ShowLoaded(Image image, Sprite sprite)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x3A68130", Offset = "0x3A68130", VA = "0x3A68130")]
	private static void FadeIn(Image image)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x3A67BB0", Offset = "0x3A67BB0", VA = "0x3A67BB0")]
	private void BuildLabel(Transform parent, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x3A67480", Offset = "0x3A67480", VA = "0x3A67480")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x3A673F0", Offset = "0x3A673F0", VA = "0x3A673F0")]
	private static string SafeId(string value)
	{
		return null;
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x3A65B30", Offset = "0x3A65B30", VA = "0x3A65B30")]
	private int ItemCount()
	{
		return default(int);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x3A682E0", Offset = "0x3A682E0", VA = "0x3A682E0")]
	public GisketchGridPickerRuntime()
	{
	}
}
