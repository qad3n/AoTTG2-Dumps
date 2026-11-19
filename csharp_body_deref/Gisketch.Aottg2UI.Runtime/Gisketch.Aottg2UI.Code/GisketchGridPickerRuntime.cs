// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime
// Update status: CHANGED in this game update
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
using Gisketch.Aottg2UI.Virtualization;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000091")]
public sealed class GisketchGridPickerRuntime : MonoBehaviour, IGisketchVirtualContentSource
{
	[Token(Token = "0x2000092")]
	private sealed class CardSlot
	{
		[Token(Token = "0x4000319")]
		[FieldOffset(Offset = "0x10")]
		public readonly GameObject Root;

		[Token(Token = "0x400031A")]
		[FieldOffset(Offset = "0x18")]
		public readonly RectTransform Rect;

		[Token(Token = "0x400031B")]
		[FieldOffset(Offset = "0x20")]
		public readonly Button Button;

		[Token(Token = "0x400031C")]
		[FieldOffset(Offset = "0x28")]
		public readonly Image Thumbnail;

		[Token(Token = "0x400031D")]
		[FieldOffset(Offset = "0x30")]
		public readonly TextMeshProUGUI Label;

		[Token(Token = "0x6000496")]
		[Address(RVA = "0x526F470", Offset = "0x526E470", VA = "0x526F470")]
		public CardSlot(GameObject root, RectTransform rect, Button button, Image thumbnail, TextMeshProUGUI label)
		{
		}
	}

	[Token(Token = "0x2000093")]
	private sealed class ThumbnailTarget : MonoBehaviour
	{
		[Token(Token = "0x400031E")]
		[FieldOffset(Offset = "0x20")]
		public string ResourcePath;

		[Token(Token = "0x400031F")]
		[FieldOffset(Offset = "0x28")]
		public int Generation;

		[Token(Token = "0x6000497")]
		[Address(RVA = "0x5270130", Offset = "0x526F130", VA = "0x5270130")]
		public ThumbnailTarget()
		{
		}
	}

	[Token(Token = "0x2000094")]
	private sealed class CardSlotHost : MonoBehaviour
	{
		[Token(Token = "0x4000320")]
		[FieldOffset(Offset = "0x20")]
		public CardSlot Slot;

		[Token(Token = "0x6000498")]
		[Address(RVA = "0x5270140", Offset = "0x526F140", VA = "0x5270140")]
		public CardSlotHost()
		{
		}
	}

	[Token(Token = "0x2000095")]
	private readonly struct ThumbnailLoad
	{
		[Token(Token = "0x4000321")]
		[FieldOffset(Offset = "0x0")]
		public readonly Image Image;

		[Token(Token = "0x4000322")]
		[FieldOffset(Offset = "0x8")]
		public readonly string ResourcePath;

		[Token(Token = "0x4000323")]
		[FieldOffset(Offset = "0x10")]
		public readonly int Generation;

		[Token(Token = "0x6000499")]
		[Address(RVA = "0x526FBB0", Offset = "0x526EBB0", VA = "0x526FBB0")]
		public ThumbnailLoad(Image image, string resourcePath, int generation)
		{
		}
	}

	[Token(Token = "0x2000099")]
	[CompilerGenerated]
	private sealed class _003CBuildCards_003Ed__33 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400032D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400032E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400032F")]
		[FieldOffset(Offset = "0x20")]
		public GisketchGridPickerRuntime _003C_003E4__this;

		[Token(Token = "0x4000330")]
		[FieldOffset(Offset = "0x28")]
		private GisketchUiPerfLog.Scope _003C_003E7__wrap1;

		[Token(Token = "0x4000331")]
		[FieldOffset(Offset = "0x48")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x1700008F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60004A4")]
			[Address(RVA = "0x52709F0", Offset = "0x526F9F0", VA = "0x52709F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000090")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60004A6")]
			[Address(RVA = "0x5270A40", Offset = "0x526FA40", VA = "0x5270A40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004A0")]
		[Address(RVA = "0x526DB90", Offset = "0x526CB90", VA = "0x526DB90")]
		[DebuggerHidden]
		public _003CBuildCards_003Ed__33(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60004A1")]
		[Address(RVA = "0x5270380", Offset = "0x526F380", VA = "0x5270380", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60004A2")]
		[Address(RVA = "0x52703A0", Offset = "0x526F3A0", VA = "0x52703A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60004A3")]
		[Address(RVA = "0x52709D0", Offset = "0x526F9D0", VA = "0x52709D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x5270A00", Offset = "0x526FA00", VA = "0x5270A00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200009A")]
	[CompilerGenerated]
	private sealed class _003CLoadThumbnails_003Ed__56 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000332")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000333")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000334")]
		[FieldOffset(Offset = "0x20")]
		public GisketchGridPickerRuntime _003C_003E4__this;

		[Token(Token = "0x4000335")]
		[FieldOffset(Offset = "0x28")]
		public int generation;

		[Token(Token = "0x4000336")]
		[FieldOffset(Offset = "0x2C")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x4000337")]
		[FieldOffset(Offset = "0x30")]
		private ThumbnailLoad _003Cload_003E5__3;

		[Token(Token = "0x4000338")]
		[FieldOffset(Offset = "0x48")]
		private ResourceRequest _003Crequest_003E5__4;

		[Token(Token = "0x17000091")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60004AA")]
			[Address(RVA = "0x5270E90", Offset = "0x526FE90", VA = "0x5270E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000092")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60004AC")]
			[Address(RVA = "0x5270EE0", Offset = "0x526FEE0", VA = "0x5270EE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x526FBE0", Offset = "0x526EBE0", VA = "0x526FBE0")]
		[DebuggerHidden]
		public _003CLoadThumbnails_003Ed__56(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x5270A50", Offset = "0x526FA50", VA = "0x5270A50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x5270A60", Offset = "0x526FA60", VA = "0x5270A60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60004AB")]
		[Address(RVA = "0x5270EA0", Offset = "0x526FEA0", VA = "0x5270EA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000307")]
	private const int ImmediateItems = 24;

	[Token(Token = "0x4000308")]
	private const int BatchSize = 12;

	[Token(Token = "0x4000309")]
	private const int VirtualizationThreshold = 80;

	[Token(Token = "0x400030A")]
	private const int OverscanRows = 2;

	[Token(Token = "0x400030B")]
	private const float Gap = 10f;

	[Token(Token = "0x400030C")]
	private const float ThumbnailFadeSeconds = 0.12f;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x20")]
	private GisketchGridPicker.RuntimeDefinition _definition;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x28")]
	private GisketchTheme _theme;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<GameObject> _cards;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<ThumbnailLoad> _thumbnailLoads;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x40")]
	private readonly List<string> _loadedThumbnails;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x48")]
	private readonly List<GisketchGridPickerItem> _filtered;

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x50")]
	private string _query;

	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x58")]
	private Coroutine _build;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x60")]
	private Coroutine _thumbnailLoader;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x68")]
	private GisketchVirtualContentRuntime _virtualContent;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x70")]
	private int _thumbnailGeneration;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x74")]
	private bool _virtualized;

	[Token(Token = "0x1700008A")]
	public string Id
	{
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x526C4B0", Offset = "0x526B4B0", VA = "0x526C4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	internal bool IsVirtualized
	{
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x526CB80", Offset = "0x526BB80", VA = "0x526CB80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008C")]
	internal int LiveCardCount
	{
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x526CB90", Offset = "0x526BB90", VA = "0x526CB90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008D")]
	private int Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EItemCount
	{
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x526CC30", Offset = "0x526BC30", VA = "0x526CC30", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008E")]
	private GisketchVirtualContentMetrics Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EMetrics
	{
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x526CC70", Offset = "0x526BC70", VA = "0x526CC70", Slot = "5")]
		get
		{
			return default(GisketchVirtualContentMetrics);
		}
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x526BD50", Offset = "0x526AD50", VA = "0x526BD50")]
	internal void Setup(GisketchGridPicker.RuntimeDefinition definition, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x526C4E0", Offset = "0x526B4E0", VA = "0x526C4E0")]
	public void SetQuery(string query)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x526CDB0", Offset = "0x526BDB0", VA = "0x526CDB0")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x526DB20", Offset = "0x526CB20", VA = "0x526DB20")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x526D4C0", Offset = "0x526C4C0", VA = "0x526D4C0")]
	private void StopBuilds()
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x526DAB0", Offset = "0x526CAB0", VA = "0x526DAB0")]
	[IteratorStateMachine(typeof(_003CBuildCards_003Ed__33))]
	private IEnumerator BuildCards()
	{
		return null;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x526D520", Offset = "0x526C520", VA = "0x526D520")]
	private void FilterItems()
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x526DBB0", Offset = "0x526CBB0", VA = "0x526DBB0")]
	private void BindCardSlot(CardSlot slot, GisketchGridPickerItem item, int index)
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x526CCF0", Offset = "0x526BCF0", VA = "0x526CCF0")]
	private void AddGridLayout(GisketchGridPicker.RuntimeDefinition definition)
	{
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x526D810", Offset = "0x526C810", VA = "0x526D810")]
	private void UpdateHeight(int count)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x526E210", Offset = "0x526D210", VA = "0x526E210")]
	private float HeightFor(int count)
	{
		return default(float);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x526E2D0", Offset = "0x526D2D0", VA = "0x526E2D0")]
	private int RowCount(int count)
	{
		return default(int);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x526E350", Offset = "0x526D350", VA = "0x526E350")]
	private GameObject CreateCard(GisketchGridPickerItem item, int index)
	{
		return null;
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x526EC60", Offset = "0x526DC60", VA = "0x526EC60")]
	private CardSlot CreateSlot(int index)
	{
		return null;
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x526E460", Offset = "0x526D460", VA = "0x526E460")]
	private CardSlot CreateCardObject(string name)
	{
		return null;
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x526EAE0", Offset = "0x526DAE0", VA = "0x526EAE0")]
	private void BindStaticCard(CardSlot slot, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x526F510", Offset = "0x526E510", VA = "0x526F510", Slot = "7")]
	private GameObject Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ECreateSlot(Transform parent, int slotIndex)
	{
		return null;
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x526F530", Offset = "0x526E530", VA = "0x526F530", Slot = "6")]
	private string Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EItemId(int itemIndex)
	{
		return null;
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x526F600", Offset = "0x526E600", VA = "0x526F600", Slot = "8")]
	private void Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EBindSlot(GameObject slotRoot, int itemIndex)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x526F750", Offset = "0x526E750", VA = "0x526F750", Slot = "9")]
	private void Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EUnbindSlot(GameObject slotRoot)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x526F790", Offset = "0x526E790", VA = "0x526F790", Slot = "10")]
	private bool Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ECanRecycleSlot(GameObject slot)
	{
		return default(bool);
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x526F7A0", Offset = "0x526E7A0", VA = "0x526F7A0", Slot = "11")]
	private bool Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ETryGetSearchTargetItemIndex(string targetId, out int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x526F8D0", Offset = "0x526E8D0", VA = "0x526F8D0", Slot = "12")]
	private bool Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ETryResolveSearchTarget(string targetId, int itemIndex, GameObject slotRoot, out GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x526E150", Offset = "0x526D150", VA = "0x526E150")]
	private void EnsureThumbnailLoader()
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x526F6A0", Offset = "0x526E6A0", VA = "0x526F6A0")]
	private static CardSlot Slot(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x526EE60", Offset = "0x526DE60", VA = "0x526EE60")]
	private Image BuildThumbnail(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x526DEA0", Offset = "0x526CEA0", VA = "0x526DEA0")]
	private void SetThumbnail(Image image, GisketchGridPickerItem item, int generation)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x526FA60", Offset = "0x526EA60", VA = "0x526FA60")]
	private void QueueThumbnail(Image image, string resourcePath, int generation)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x526DA40", Offset = "0x526CA40", VA = "0x526DA40")]
	[IteratorStateMachine(typeof(_003CLoadThumbnails_003Ed__56))]
	private IEnumerator LoadThumbnails(int generation)
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x526FC00", Offset = "0x526EC00", VA = "0x526FC00")]
	private static bool IsCurrent(ThumbnailLoad load, int generation)
	{
		return default(bool);
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x526F9A0", Offset = "0x526E9A0", VA = "0x526F9A0")]
	private static void ShowLoaded(Image image, Sprite sprite)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x526FCF0", Offset = "0x526ECF0", VA = "0x526FCF0")]
	private static void FadeIn(Image image, string resourcePath, int generation)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x526FED0", Offset = "0x526EED0", VA = "0x526FED0")]
	private static bool IsCurrent(Image image, string resourcePath, int generation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x526F0B0", Offset = "0x526E0B0", VA = "0x526F0B0")]
	private TextMeshProUGUI BuildLabel(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x526ED60", Offset = "0x526DD60", VA = "0x526ED60")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x526DE10", Offset = "0x526CE10", VA = "0x526DE10")]
	private static string SafeId(string value)
	{
		return null;
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x526CCD0", Offset = "0x526BCD0", VA = "0x526CCD0")]
	private int ItemCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x526FFB0", Offset = "0x526EFB0", VA = "0x526FFB0")]
	public GisketchGridPickerRuntime()
	{
	}
}
