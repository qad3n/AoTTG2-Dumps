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

[Token(Token = "0x200008B")]
public sealed class GisketchGridPickerRuntime : MonoBehaviour, IGisketchVirtualContentSource
{
	[Token(Token = "0x200008C")]
	private sealed class CardSlot
	{
		[Token(Token = "0x40002F2")]
		[FieldOffset(Offset = "0x10")]
		public readonly GameObject Root;

		[Token(Token = "0x40002F3")]
		[FieldOffset(Offset = "0x18")]
		public readonly RectTransform Rect;

		[Token(Token = "0x40002F4")]
		[FieldOffset(Offset = "0x20")]
		public readonly Button Button;

		[Token(Token = "0x40002F5")]
		[FieldOffset(Offset = "0x28")]
		public readonly Image Thumbnail;

		[Token(Token = "0x40002F6")]
		[FieldOffset(Offset = "0x30")]
		public readonly TextMeshProUGUI Label;

		[Token(Token = "0x6000449")]
		[Address(RVA = "0x18CB310", Offset = "0x18C9910", VA = "0x1818CB310")]
		public CardSlot(GameObject root, RectTransform rect, Button button, Image thumbnail, TextMeshProUGUI label)
		{
		}
	}

	[Token(Token = "0x200008D")]
	private sealed class ThumbnailTarget : MonoBehaviour
	{
		[Token(Token = "0x40002F7")]
		[FieldOffset(Offset = "0x20")]
		public string ResourcePath;

		[Token(Token = "0x40002F8")]
		[FieldOffset(Offset = "0x28")]
		public int Generation;

		[Token(Token = "0x600044A")]
		[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
		public ThumbnailTarget()
		{
		}
	}

	[Token(Token = "0x200008E")]
	private sealed class CardSlotHost : MonoBehaviour
	{
		[Token(Token = "0x40002F9")]
		[FieldOffset(Offset = "0x20")]
		public CardSlot Slot;

		[Token(Token = "0x600044B")]
		[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
		public CardSlotHost()
		{
		}
	}

	[Token(Token = "0x200008F")]
	private readonly struct ThumbnailLoad
	{
		[Token(Token = "0x40002FA")]
		[FieldOffset(Offset = "0x0")]
		public readonly Image Image;

		[Token(Token = "0x40002FB")]
		[FieldOffset(Offset = "0x8")]
		public readonly string ResourcePath;

		[Token(Token = "0x40002FC")]
		[FieldOffset(Offset = "0x10")]
		public readonly int Generation;

		[Token(Token = "0x600044C")]
		[Address(RVA = "0x1046380", Offset = "0x1044980", VA = "0x181046380")]
		public ThumbnailLoad(Image image, string resourcePath, int generation)
		{
		}
	}

	[Token(Token = "0x2000093")]
	[CompilerGenerated]
	private sealed class _003CBuildCards_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000306")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000307")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000308")]
		[FieldOffset(Offset = "0x20")]
		public GisketchGridPickerRuntime _003C_003E4__this;

		[Token(Token = "0x4000309")]
		[FieldOffset(Offset = "0x28")]
		private GisketchUiPerfLog.Scope _003C_003E7__wrap1;

		[Token(Token = "0x400030A")]
		[FieldOffset(Offset = "0x48")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x1700008F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000457")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000090")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000459")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000453")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CBuildCards_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000454")]
		[Address(RVA = "0x18D96C0", Offset = "0x18D7CC0", VA = "0x1818D96C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000455")]
		[Address(RVA = "0x18D90B0", Offset = "0x18D76B0", VA = "0x1818D90B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000456")]
		[Address(RVA = "0x18D9720", Offset = "0x18D7D20", VA = "0x1818D9720")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000458")]
		[Address(RVA = "0x18D9680", Offset = "0x18D7C80", VA = "0x1818D9680", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000094")]
	[CompilerGenerated]
	private sealed class _003CLoadThumbnails_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400030B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400030C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400030D")]
		[FieldOffset(Offset = "0x20")]
		public GisketchGridPickerRuntime _003C_003E4__this;

		[Token(Token = "0x400030E")]
		[FieldOffset(Offset = "0x28")]
		public int generation;

		[Token(Token = "0x400030F")]
		[FieldOffset(Offset = "0x2C")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x4000310")]
		[FieldOffset(Offset = "0x30")]
		private ThumbnailLoad _003Cload_003E5__3;

		[Token(Token = "0x4000311")]
		[FieldOffset(Offset = "0x48")]
		private ResourceRequest _003Crequest_003E5__4;

		[Token(Token = "0x17000091")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600045D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000092")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600045F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600045A")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadThumbnails_003Ed__54(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600045B")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600045C")]
		[Address(RVA = "0x18D9740", Offset = "0x18D7D40", VA = "0x1818D9740", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600045E")]
		[Address(RVA = "0x18D9C90", Offset = "0x18D8290", VA = "0x1818D9C90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40002E1")]
	private const int ImmediateItems = 24;

	[Token(Token = "0x40002E2")]
	private const int BatchSize = 12;

	[Token(Token = "0x40002E3")]
	private const int VirtualizationThreshold = 80;

	[Token(Token = "0x40002E4")]
	private const int OverscanRows = 2;

	[Token(Token = "0x40002E5")]
	private const float Gap = 10f;

	[Token(Token = "0x40002E6")]
	private const float ThumbnailFadeSeconds = 0.12f;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x20")]
	private GisketchGridPicker.RuntimeDefinition _definition;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x28")]
	private GisketchTheme _theme;

	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<GameObject> _cards;

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<ThumbnailLoad> _thumbnailLoads;

	[Token(Token = "0x40002EB")]
	[FieldOffset(Offset = "0x40")]
	private readonly List<GisketchGridPickerItem> _filtered;

	[Token(Token = "0x40002EC")]
	[FieldOffset(Offset = "0x48")]
	private string _query;

	[Token(Token = "0x40002ED")]
	[FieldOffset(Offset = "0x50")]
	private Coroutine _build;

	[Token(Token = "0x40002EE")]
	[FieldOffset(Offset = "0x58")]
	private Coroutine _thumbnailLoader;

	[Token(Token = "0x40002EF")]
	[FieldOffset(Offset = "0x60")]
	private GisketchVirtualContentRuntime _virtualContent;

	[Token(Token = "0x40002F0")]
	[FieldOffset(Offset = "0x68")]
	private int _thumbnailGeneration;

	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0x6C")]
	private bool _virtualized;

	[Token(Token = "0x1700008A")]
	public string Id
	{
		[Token(Token = "0x600041F")]
		[Address(RVA = "0x18CF2E0", Offset = "0x18CD8E0", VA = "0x1818CF2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	internal bool IsVirtualized
	{
		[Token(Token = "0x6000420")]
		[Address(RVA = "0x18CF310", Offset = "0x18CD910", VA = "0x1818CF310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008C")]
	internal int LiveCardCount
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x18CF320", Offset = "0x18CD920", VA = "0x1818CF320")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008D")]
	private int Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EItemCount
	{
		[Token(Token = "0x6000422")]
		[Address(RVA = "0x18CD610", Offset = "0x18CBC10", VA = "0x1818CD610", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008E")]
	private GisketchVirtualContentMetrics Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EMetrics
	{
		[Token(Token = "0x6000423")]
		[Address(RVA = "0x18CD650", Offset = "0x18CBC50", VA = "0x1818CD650", Slot = "5")]
		get
		{
			return default(GisketchVirtualContentMetrics);
		}
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x18CE850", Offset = "0x18CCE50", VA = "0x1818CE850")]
	internal void Setup(GisketchGridPicker.RuntimeDefinition definition, GisketchTheme theme)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x18CE370", Offset = "0x18CC970", VA = "0x1818CE370")]
	public void SetQuery(string query)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x18CDBB0", Offset = "0x18CC1B0", VA = "0x1818CDBB0")]
	private void Rebuild()
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x18CEF50", Offset = "0x18CD550", VA = "0x1818CEF50")]
	private void StopBuilds()
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x18CB900", Offset = "0x18C9F00", VA = "0x1818CB900")]
	[IteratorStateMachine(typeof(_003CBuildCards_003Ed__31))]
	private IEnumerator BuildCards()
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x18CCEA0", Offset = "0x18CB4A0", VA = "0x1818CCEA0")]
	private void FilterItems()
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x18CB480", Offset = "0x18C9A80", VA = "0x1818CB480")]
	private void BindCardSlot(CardSlot slot, GisketchGridPickerItem item, int index)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x18CB3A0", Offset = "0x18C99A0", VA = "0x1818CB3A0")]
	private void AddGridLayout(GisketchGridPicker.RuntimeDefinition definition)
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x18CEFB0", Offset = "0x18CD5B0", VA = "0x1818CEFB0")]
	private void UpdateHeight(int count)
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x18CD6D0", Offset = "0x18CBCD0", VA = "0x1818CD6D0")]
	private float HeightFor(int count)
	{
		return default(float);
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x18CE260", Offset = "0x18CC860", VA = "0x1818CE260")]
	private int RowCount(int count)
	{
		return default(int);
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x18CC860", Offset = "0x18CAE60", VA = "0x1818CC860")]
	private GameObject CreateCard(GisketchGridPickerItem item, int index)
	{
		return null;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x18CCB60", Offset = "0x18CB160", VA = "0x1818CCB60")]
	private CardSlot CreateSlot(int index)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x18CC030", Offset = "0x18CA630", VA = "0x1818CC030")]
	private CardSlot CreateCardObject(string name)
	{
		return null;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x18CB790", Offset = "0x18C9D90", VA = "0x1818CB790")]
	private void BindStaticCard(CardSlot slot, GisketchGridPickerItem item)
	{
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x18CD200", Offset = "0x18CB800", VA = "0x1818CD200", Slot = "7")]
	private GameObject Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ECreateSlot(Transform parent, int slotIndex)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x18CD300", Offset = "0x18CB900", VA = "0x1818CD300", Slot = "6")]
	private string Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EItemId(int itemIndex)
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x18CD130", Offset = "0x18CB730", VA = "0x1818CD130", Slot = "8")]
	private void Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EBindSlot(GameObject slotRoot, int itemIndex)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x18CD5D0", Offset = "0x18CBBD0", VA = "0x1818CD5D0", Slot = "9")]
	private void Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002EUnbindSlot(GameObject slotRoot)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
	private bool Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ECanRecycleSlot(GameObject slot)
	{
		return default(bool);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x18CD3E0", Offset = "0x18CB9E0", VA = "0x1818CD3E0", Slot = "11")]
	private bool Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ETryGetSearchTargetItemIndex(string targetId, out int itemIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x18CD500", Offset = "0x18CBB00", VA = "0x1818CD500", Slot = "12")]
	private bool Gisketch_002EAottg2UI_002EVirtualization_002EIGisketchVirtualContentSource_002ETryResolveSearchTarget(string targetId, int itemIndex, GameObject slotRoot, out GameObject target)
	{
		return default(bool);
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x18CCC60", Offset = "0x18CB260", VA = "0x1818CCC60")]
	private void EnsureThumbnailLoader()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x18CEE90", Offset = "0x18CD490", VA = "0x1818CEE90")]
	private static CardSlot Slot(GameObject root)
	{
		return null;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x18CBDB0", Offset = "0x18CA3B0", VA = "0x1818CBDB0")]
	private Image BuildThumbnail(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x18CE470", Offset = "0x18CCA70", VA = "0x1818CE470")]
	private void SetThumbnail(Image image, GisketchGridPickerItem item, int generation)
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x18CDA50", Offset = "0x18CC050", VA = "0x1818CDA50")]
	private void QueueThumbnail(Image image, string resourcePath, int generation)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x18CD9D0", Offset = "0x18CBFD0", VA = "0x1818CD9D0")]
	[IteratorStateMachine(typeof(_003CLoadThumbnails_003Ed__54))]
	private IEnumerator LoadThumbnails(int generation)
	{
		return null;
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x18CD780", Offset = "0x18CBD80", VA = "0x1818CD780")]
	private static bool IsCurrent(ThumbnailLoad load, int generation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x18CEDC0", Offset = "0x18CD3C0", VA = "0x1818CEDC0")]
	private static void ShowLoaded(Image image, Sprite sprite)
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x18CCCC0", Offset = "0x18CB2C0", VA = "0x1818CCCC0")]
	private static void FadeIn(Image image, string resourcePath, int generation)
	{
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x18CD8A0", Offset = "0x18CBEA0", VA = "0x1818CD8A0")]
	private static bool IsCurrent(Image image, string resourcePath, int generation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x18CB970", Offset = "0x18C9F70", VA = "0x1818CB970")]
	private TextMeshProUGUI BuildLabel(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x189B1D0", Offset = "0x18997D0", VA = "0x18189B1D0")]
	private static void Stretch(RectTransform rect)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x18CE2E0", Offset = "0x18CC8E0", VA = "0x1818CE2E0")]
	private static string SafeId(string value)
	{
		return null;
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x18CD9B0", Offset = "0x18CBFB0", VA = "0x1818CD9B0")]
	private int ItemCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x18CF1B0", Offset = "0x18CD7B0", VA = "0x1818CF1B0")]
	public GisketchGridPickerRuntime()
	{
	}
}
