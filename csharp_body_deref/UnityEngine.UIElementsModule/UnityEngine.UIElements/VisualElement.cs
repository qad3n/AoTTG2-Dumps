using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using Unity.Profiling;
using Unity.Properties;
using UnityEngine.UIElements.Experimental;
using UnityEngine.UIElements.Layout;
using UnityEngine.UIElements.StyleSheets;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002EF")]
public class VisualElement : Focusable, IResolvedStyle, IStylePropertyAnimations, ITransform, ITransitionAnimations, IExperimentalFeatures, IVisualElementScheduler
{
	[Token(Token = "0x20002F0")]
	public class UxmlFactory : UxmlFactory<VisualElement, UxmlTraits>
	{
		[Token(Token = "0x6001453")]
		[Address(RVA = "0x4D7A3D0", Offset = "0x4D7A3D0", VA = "0x4D7A3D0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20002F1")]
	public class UxmlTraits : UnityEngine.UIElements.UxmlTraits
	{
		[Token(Token = "0x40009D9")]
		[FieldOffset(Offset = "0x18")]
		protected UxmlStringAttributeDescription m_Name;

		[Token(Token = "0x40009DA")]
		[FieldOffset(Offset = "0x20")]
		private UxmlStringAttributeDescription m_ViewDataKey;

		[Token(Token = "0x40009DB")]
		[FieldOffset(Offset = "0x28")]
		protected UxmlEnumAttributeDescription<PickingMode> m_PickingMode;

		[Token(Token = "0x40009DC")]
		[FieldOffset(Offset = "0x30")]
		private UxmlStringAttributeDescription m_Tooltip;

		[Token(Token = "0x40009DD")]
		[FieldOffset(Offset = "0x38")]
		private UxmlEnumAttributeDescription<UsageHints> m_UsageHints;

		[Token(Token = "0x40009DF")]
		[FieldOffset(Offset = "0x48")]
		private UxmlIntAttributeDescription m_TabIndex;

		[Token(Token = "0x40009E1")]
		[FieldOffset(Offset = "0x58")]
		private UxmlStringAttributeDescription m_Class;

		[Token(Token = "0x40009E2")]
		[FieldOffset(Offset = "0x60")]
		private UxmlStringAttributeDescription m_ContentContainer;

		[Token(Token = "0x40009E3")]
		[FieldOffset(Offset = "0x68")]
		private UxmlStringAttributeDescription m_Style;

		[Token(Token = "0x1700057D")]
		protected UxmlIntAttributeDescription focusIndex
		{
			[Token(Token = "0x6001454")]
			[Address(RVA = "0x4D7A410", Offset = "0x4D7A410", VA = "0x4D7A410")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700057E")]
		protected UxmlBoolAttributeDescription focusable
		{
			[Token(Token = "0x6001455")]
			[Address(RVA = "0x4D7A420", Offset = "0x4D7A420", VA = "0x4D7A420")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001456")]
		[Address(RVA = "0x4D7A430", Offset = "0x4D7A430", VA = "0x4D7A430", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6001457")]
		[Address(RVA = "0x4D7A870", Offset = "0x4D7A870", VA = "0x4D7A870")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20002F2")]
	public enum MeasureMode
	{
		[Token(Token = "0x40009E5")]
		Undefined,
		[Token(Token = "0x40009E6")]
		Exactly,
		[Token(Token = "0x40009E7")]
		AtMost
	}

	[Token(Token = "0x20002F3")]
	internal enum RenderTargetMode
	{
		[Token(Token = "0x40009E9")]
		None,
		[Token(Token = "0x40009EA")]
		NoColorConversion,
		[Token(Token = "0x40009EB")]
		LinearToGamma,
		[Token(Token = "0x40009EC")]
		GammaToLinear
	}

	[Token(Token = "0x20002F4")]
	public struct Hierarchy
	{
		[Token(Token = "0x40009ED")]
		private const string k_InvalidHierarchyChangeMsg = "Cannot modify VisualElement hierarchy during layout calculation";

		[Token(Token = "0x40009EE")]
		[FieldOffset(Offset = "0x0")]
		private readonly VisualElement m_Owner;

		[Token(Token = "0x1700057F")]
		public VisualElement parent
		{
			[Token(Token = "0x6001458")]
			[Address(RVA = "0x4D67BB0", Offset = "0x4D67BB0", VA = "0x4D67BB0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000580")]
		internal List<VisualElement> children
		{
			[Token(Token = "0x6001459")]
			[Address(RVA = "0x4D7AE40", Offset = "0x4D7AE40", VA = "0x4D7AE40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000581")]
		public int childCount
		{
			[Token(Token = "0x6001464")]
			[Address(RVA = "0x4D77740", Offset = "0x4D77740", VA = "0x4D77740")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000582")]
		public VisualElement this[int key]
		{
			[Token(Token = "0x6001465")]
			[Address(RVA = "0x4D77650", Offset = "0x4D77650", VA = "0x4D77650")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600145A")]
		[Address(RVA = "0x4D6DF90", Offset = "0x4D6DF90", VA = "0x4D6DF90")]
		internal Hierarchy(VisualElement element)
		{
		}

		[Token(Token = "0x600145B")]
		[Address(RVA = "0x4D76990", Offset = "0x4D76990", VA = "0x4D76990")]
		public void Add(VisualElement child)
		{
		}

		[Token(Token = "0x600145C")]
		[Address(RVA = "0x4D76AD0", Offset = "0x4D76AD0", VA = "0x4D76AD0")]
		public void Insert(int index, VisualElement child)
		{
		}

		[Token(Token = "0x600145D")]
		[Address(RVA = "0x4D76F30", Offset = "0x4D76F30", VA = "0x4D76F30")]
		public void Remove(VisualElement child)
		{
		}

		[Token(Token = "0x600145E")]
		[Address(RVA = "0x4D7B120", Offset = "0x4D7B120", VA = "0x4D7B120")]
		public void RemoveAt(int index)
		{
		}

		[Token(Token = "0x600145F")]
		[Address(RVA = "0x4D77090", Offset = "0x4D77090", VA = "0x4D77090")]
		public void Clear()
		{
		}

		[Token(Token = "0x6001460")]
		[Address(RVA = "0x4D77D60", Offset = "0x4D77D60", VA = "0x4D77D60")]
		internal void BringToFront(VisualElement child)
		{
		}

		[Token(Token = "0x6001461")]
		[Address(RVA = "0x4D77EA0", Offset = "0x4D77EA0", VA = "0x4D77EA0")]
		internal void SendToBack(VisualElement child)
		{
		}

		[Token(Token = "0x6001462")]
		[Address(RVA = "0x4D78050", Offset = "0x4D78050", VA = "0x4D78050")]
		internal void PlaceBehind(VisualElement child, VisualElement over)
		{
		}

		[Token(Token = "0x6001463")]
		[Address(RVA = "0x4D7B600", Offset = "0x4D7B600", VA = "0x4D7B600")]
		private void MoveChildElement(VisualElement child, int currentIndex, int nextIndex)
		{
		}

		[Token(Token = "0x6001466")]
		[Address(RVA = "0x4D77830", Offset = "0x4D77830", VA = "0x4D77830")]
		public int IndexOf(VisualElement element)
		{
			return default(int);
		}

		[Token(Token = "0x6001467")]
		[Address(RVA = "0x4D7B770", Offset = "0x4D7B770", VA = "0x4D7B770")]
		public VisualElement ElementAt(int index)
		{
			return null;
		}

		[Token(Token = "0x6001468")]
		[Address(RVA = "0x4D77D00", Offset = "0x4D77D00", VA = "0x4D77D00")]
		public IEnumerable<VisualElement> Children()
		{
			return null;
		}

		[Token(Token = "0x6001469")]
		[Address(RVA = "0x4D7B020", Offset = "0x4D7B020", VA = "0x4D7B020")]
		private void SetParent(VisualElement value)
		{
		}

		[Token(Token = "0x600146A")]
		[Address(RVA = "0x4D7AE60", Offset = "0x4D7AE60", VA = "0x4D7AE60")]
		private void PutChildAtIndex(VisualElement child, int index)
		{
		}

		[Token(Token = "0x600146B")]
		[Address(RVA = "0x4D7B4A0", Offset = "0x4D7B4A0", VA = "0x4D7B4A0")]
		private void RemoveChildAtIndex(int index)
		{
		}

		[Token(Token = "0x600146C")]
		[Address(RVA = "0x4D7B510", Offset = "0x4D7B510", VA = "0x4D7B510")]
		private void ReleaseChildList()
		{
		}

		[Token(Token = "0x600146D")]
		[Address(RVA = "0x4D7B7D0", Offset = "0x4D7B7D0", VA = "0x4D7B7D0")]
		public bool Equals(Hierarchy other)
		{
			return default(bool);
		}

		[Token(Token = "0x600146E")]
		[Address(RVA = "0x4D7B7F0", Offset = "0x4D7B7F0", VA = "0x4D7B7F0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600146F")]
		[Address(RVA = "0x4D7B850", Offset = "0x4D7B850", VA = "0x4D7B850", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6001470")]
		[Address(RVA = "0x4D7B7E0", Offset = "0x4D7B7E0", VA = "0x4D7B7E0")]
		public static bool operator ==(Hierarchy x, Hierarchy y)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20002F5")]
	private abstract class BaseVisualElementScheduledItem : ScheduledItem, IVisualElementScheduledItem, IVisualElementPanelActivatable
	{
		[Token(Token = "0x40009F0")]
		[FieldOffset(Offset = "0x40")]
		public bool isScheduled;

		[Token(Token = "0x40009F1")]
		[FieldOffset(Offset = "0x48")]
		private VisualElementPanelActivator m_Activator;

		[Token(Token = "0x17000583")]
		public VisualElement element
		{
			[Token(Token = "0x6001471")]
			[Address(RVA = "0x4D7BAB0", Offset = "0x4D7BAB0", VA = "0x4D7BAB0", Slot = "12")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001472")]
			[Address(RVA = "0x4D7BAC0", Offset = "0x4D7BAC0", VA = "0x4D7BAC0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6001473")]
		[Address(RVA = "0x4D7BAD0", Offset = "0x4D7BAD0", VA = "0x4D7BAD0")]
		protected BaseVisualElementScheduledItem(VisualElement handler)
		{
		}

		[Token(Token = "0x6001474")]
		[Address(RVA = "0x4D7BB80", Offset = "0x4D7BB80", VA = "0x4D7BB80", Slot = "10")]
		public IVisualElementScheduledItem StartingIn(long delayMs)
		{
			return null;
		}

		[Token(Token = "0x6001475")]
		[Address(RVA = "0x4D7BB90", Offset = "0x4D7BB90", VA = "0x4D7BB90", Slot = "11")]
		public IVisualElementScheduledItem Every(long intervalMs)
		{
			return null;
		}

		[Token(Token = "0x6001476")]
		[Address(RVA = "0x4D7BC30", Offset = "0x4D7BC30", VA = "0x4D7BC30", Slot = "5")]
		internal override void OnItemUnscheduled()
		{
		}

		[Token(Token = "0x6001477")]
		[Address(RVA = "0x4D7BC60", Offset = "0x4D7BC60", VA = "0x4D7BC60", Slot = "7")]
		public void Resume()
		{
		}

		[Token(Token = "0x6001478")]
		[Address(RVA = "0x4D7BC80", Offset = "0x4D7BC80", VA = "0x4D7BC80", Slot = "8")]
		public void Pause()
		{
		}

		[Token(Token = "0x6001479")]
		[Address(RVA = "0x4D7BCA0", Offset = "0x4D7BCA0", VA = "0x4D7BCA0", Slot = "9")]
		public void ExecuteLater(long delayMs)
		{
		}

		[Token(Token = "0x600147A")]
		[Address(RVA = "0x4D7BCE0", Offset = "0x4D7BCE0", VA = "0x4D7BCE0", Slot = "14")]
		public void OnPanelActivate()
		{
		}

		[Token(Token = "0x600147B")]
		[Address(RVA = "0x4D7BDD0", Offset = "0x4D7BDD0", VA = "0x4D7BDD0", Slot = "15")]
		public void OnPanelDeactivate()
		{
		}

		[Token(Token = "0x600147C")]
		[Address(RVA = "0x4D7BEC0", Offset = "0x4D7BEC0", VA = "0x4D7BEC0", Slot = "13")]
		public bool CanBeActivated()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20002F6")]
	private abstract class VisualElementScheduledItem<ActionType> : BaseVisualElementScheduledItem
	{
		[Token(Token = "0x40009F2")]
		[FieldOffset(Offset = "0x0")]
		public ActionType updateEvent;

		[Token(Token = "0x600147D")]
		public VisualElementScheduledItem(VisualElement handler, ActionType upEvent)
		{
		}
	}

	[Token(Token = "0x20002F7")]
	private class TimerStateScheduledItem : VisualElementScheduledItem<Action<TimerState>>
	{
		[Token(Token = "0x600147E")]
		[Address(RVA = "0x4D7BF00", Offset = "0x4D7BF00", VA = "0x4D7BF00")]
		public TimerStateScheduledItem(VisualElement handler, Action<TimerState> updateEvent)
		{
		}

		[Token(Token = "0x600147F")]
		[Address(RVA = "0x4D7BF50", Offset = "0x4D7BF50", VA = "0x4D7BF50", Slot = "4")]
		public override void PerformTimerUpdate(TimerState state)
		{
		}
	}

	[Token(Token = "0x20002F8")]
	private class SimpleScheduledItem : VisualElementScheduledItem<Action>
	{
		[Token(Token = "0x6001480")]
		[Address(RVA = "0x4D7BF80", Offset = "0x4D7BF80", VA = "0x4D7BF80")]
		public SimpleScheduledItem(VisualElement handler, Action updateEvent)
		{
		}

		[Token(Token = "0x6001481")]
		[Address(RVA = "0x4D7BFD0", Offset = "0x4D7BFD0", VA = "0x4D7BFD0", Slot = "4")]
		public override void PerformTimerUpdate(TimerState state)
		{
		}
	}

	[Token(Token = "0x20002F9")]
	internal class CustomStyleAccess : ICustomStyle
	{
		[Token(Token = "0x40009F3")]
		[FieldOffset(Offset = "0x10")]
		private Dictionary<string, StylePropertyValue> m_CustomProperties;

		[Token(Token = "0x40009F4")]
		[FieldOffset(Offset = "0x18")]
		private float m_DpiScaling;

		[Token(Token = "0x6001482")]
		[Address(RVA = "0x4D7C000", Offset = "0x4D7C000", VA = "0x4D7C000")]
		public void SetContext(Dictionary<string, StylePropertyValue> customProperties, float dpiScaling)
		{
		}

		[Token(Token = "0x6001483")]
		[Address(RVA = "0x4D7C030", Offset = "0x4D7C030", VA = "0x4D7C030", Slot = "4")]
		public bool TryGetValue(CustomStyleProperty<float> property, out float value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001484")]
		[Address(RVA = "0x4D7C2B0", Offset = "0x4D7C2B0", VA = "0x4D7C2B0", Slot = "5")]
		public bool TryGetValue(CustomStyleProperty<int> property, out int value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001485")]
		[Address(RVA = "0x4D7C3C0", Offset = "0x4D7C3C0", VA = "0x4D7C3C0", Slot = "6")]
		public bool TryGetValue(CustomStyleProperty<Color> property, out Color value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001486")]
		[Address(RVA = "0x4D7C6C0", Offset = "0x4D7C6C0", VA = "0x4D7C6C0", Slot = "7")]
		public bool TryGetValue(CustomStyleProperty<Texture2D> property, out Texture2D value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001487")]
		[Address(RVA = "0x4D7C7D0", Offset = "0x4D7C7D0", VA = "0x4D7C7D0", Slot = "8")]
		public bool TryGetValue(CustomStyleProperty<Sprite> property, out Sprite value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001488")]
		[Address(RVA = "0x4D7C8E0", Offset = "0x4D7C8E0", VA = "0x4D7C8E0", Slot = "9")]
		public bool TryGetValue(CustomStyleProperty<VectorImage> property, out VectorImage value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001489")]
		[Address(RVA = "0x4D7C9F0", Offset = "0x4D7C9F0", VA = "0x4D7C9F0", Slot = "10")]
		public bool TryGetValue(CustomStyleProperty<string> property, out string value)
		{
			return default(bool);
		}

		[Token(Token = "0x600148A")]
		[Address(RVA = "0x4D7C120", Offset = "0x4D7C120", VA = "0x4D7C120")]
		private bool TryGetValue(string propertyName, StyleValueType valueType, out StylePropertyValue customProp)
		{
			return default(bool);
		}

		[Token(Token = "0x600148B")]
		[Address(RVA = "0x4D7C5F0", Offset = "0x4D7C5F0", VA = "0x4D7C5F0")]
		private static void LogCustomPropertyWarning(string propertyName, StyleValueType valueType, StylePropertyValue customProp)
		{
		}

		[Token(Token = "0x600148C")]
		[Address(RVA = "0x4D7CAB0", Offset = "0x4D7CAB0", VA = "0x4D7CAB0")]
		public CustomStyleAccess()
		{
		}
	}

	[Token(Token = "0x20002FA")]
	internal class TypeData
	{
		[Token(Token = "0x40009F6")]
		[FieldOffset(Offset = "0x18")]
		private string m_FullTypeName;

		[Token(Token = "0x40009F7")]
		[FieldOffset(Offset = "0x20")]
		private string m_TypeName;

		[Token(Token = "0x40009F8")]
		[FieldOffset(Offset = "0x28")]
		private string m_TypeNamespace;

		[Token(Token = "0x17000584")]
		public Type type
		{
			[Token(Token = "0x600148D")]
			[Address(RVA = "0x4D7CAC0", Offset = "0x4D7CAC0", VA = "0x4D7CAC0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000585")]
		public string fullTypeName
		{
			[Token(Token = "0x600148F")]
			[Address(RVA = "0x4D7CB60", Offset = "0x4D7CB60", VA = "0x4D7CB60")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000586")]
		public string typeName
		{
			[Token(Token = "0x6001490")]
			[Address(RVA = "0x4D7CBC0", Offset = "0x4D7CBC0", VA = "0x4D7CBC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000587")]
		public string typeNamespace
		{
			[Token(Token = "0x6001491")]
			[Address(RVA = "0x4D7CC70", Offset = "0x4D7CC70", VA = "0x4D7CC70")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600148E")]
		[Address(RVA = "0x4D7CAD0", Offset = "0x4D7CAD0", VA = "0x4D7CAD0")]
		public TypeData(Type type)
		{
		}
	}

	[Token(Token = "0x4000981")]
	[FieldOffset(Offset = "0x0")]
	private static uint s_NextId;

	[Token(Token = "0x4000982")]
	[FieldOffset(Offset = "0x8")]
	private static List<string> s_EmptyClassList;

	[Token(Token = "0x4000983")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly PropertyName userDataPropertyKey;

	[Token(Token = "0x4000984")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string disabledUssClassName;

	[Token(Token = "0x4000985")]
	[FieldOffset(Offset = "0x38")]
	private string m_Name;

	[Token(Token = "0x4000986")]
	[FieldOffset(Offset = "0x40")]
	private List<string> m_ClassList;

	[Token(Token = "0x4000987")]
	[FieldOffset(Offset = "0x48")]
	private List<KeyValuePair<PropertyName, object>> m_PropertyBag;

	[Token(Token = "0x4000988")]
	[FieldOffset(Offset = "0x50")]
	internal VisualElementFlags m_Flags;

	[Token(Token = "0x4000989")]
	[FieldOffset(Offset = "0x58")]
	private string m_ViewDataKey;

	[Token(Token = "0x400098A")]
	[FieldOffset(Offset = "0x60")]
	private RenderHints m_RenderHints;

	[Token(Token = "0x400098B")]
	[FieldOffset(Offset = "0x64")]
	internal Rect lastLayout;

	[Token(Token = "0x400098C")]
	[FieldOffset(Offset = "0x74")]
	internal Rect lastPseudoPadding;

	[Token(Token = "0x400098D")]
	[FieldOffset(Offset = "0x88")]
	internal RenderChainVEData renderChainData;

	[Token(Token = "0x400098E")]
	[FieldOffset(Offset = "0x1B8")]
	private Rect m_Layout;

	[Token(Token = "0x400098F")]
	[FieldOffset(Offset = "0x1C8")]
	private Rect m_BoundingBox;

	[Token(Token = "0x4000990")]
	private const VisualElementFlags worldBoundingBoxDirtyDependencies = VisualElementFlags.WorldTransformDirty | VisualElementFlags.BoundingBoxDirty | VisualElementFlags.WorldBoundingBoxDirty;

	[Token(Token = "0x4000991")]
	[FieldOffset(Offset = "0x1D8")]
	private Rect m_WorldBoundingBox;

	[Token(Token = "0x4000992")]
	private const VisualElementFlags worldTransformInverseDirtyDependencies = VisualElementFlags.WorldTransformDirty | VisualElementFlags.WorldTransformInverseDirty;

	[Token(Token = "0x4000993")]
	[FieldOffset(Offset = "0x1E8")]
	private Matrix4x4 m_WorldTransformCache;

	[Token(Token = "0x4000994")]
	[FieldOffset(Offset = "0x228")]
	private Matrix4x4 m_WorldTransformInverseCache;

	[Token(Token = "0x4000995")]
	[FieldOffset(Offset = "0x268")]
	private Rect m_WorldClip;

	[Token(Token = "0x4000996")]
	[FieldOffset(Offset = "0x278")]
	private Rect m_WorldClipMinusGroup;

	[Token(Token = "0x4000997")]
	[FieldOffset(Offset = "0x288")]
	private bool m_WorldClipIsInfinite;

	[Token(Token = "0x4000998")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly Rect s_InfiniteRect;

	[Token(Token = "0x4000999")]
	[FieldOffset(Offset = "0x28C")]
	internal PseudoStates triggerPseudoMask;

	[Token(Token = "0x400099A")]
	[FieldOffset(Offset = "0x290")]
	internal PseudoStates dependencyPseudoMask;

	[Token(Token = "0x400099B")]
	[FieldOffset(Offset = "0x294")]
	private PseudoStates m_PseudoStates;

	[Token(Token = "0x400099D")]
	[FieldOffset(Offset = "0x29C")]
	private PickingMode m_PickingMode;

	[Token(Token = "0x400099E")]
	[FieldOffset(Offset = "0x2A0")]
	private LayoutNode m_LayoutNode;

	[Token(Token = "0x400099F")]
	[FieldOffset(Offset = "0x2D0")]
	internal ComputedStyle m_Style;

	[Token(Token = "0x40009A0")]
	[FieldOffset(Offset = "0x320")]
	internal StyleVariableContext variableContext;

	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x328")]
	internal int inheritedStylesHash;

	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x32C")]
	internal readonly uint controlid;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x330")]
	internal int imguiContainerDescendantCount;

	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x334")]
	private bool m_EnabledSelf;

	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x338")]
	private LanguageDirection m_LanguageDirection;

	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x33C")]
	private LanguageDirection m_LocalLanguageDirection;

	[Token(Token = "0x40009A8")]
	[FieldOffset(Offset = "0x30")]
	private static readonly ProfilerMarker k_GenerateVisualContentMarker;

	[Token(Token = "0x40009A9")]
	[FieldOffset(Offset = "0x348")]
	private RenderTargetMode m_SubRenderTargetMode;

	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x38")]
	private static Material s_runtimeMaterial;

	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x350")]
	private Material m_defaultMaterial;

	[Token(Token = "0x40009AC")]
	[FieldOffset(Offset = "0x358")]
	private List<IValueAnimationUpdate> m_RunningAnimations;

	[Token(Token = "0x40009AD")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly DataBindingProperty viewDataKeyProperty;

	[Token(Token = "0x40009AE")]
	[FieldOffset(Offset = "0xE0")]
	internal static readonly DataBindingProperty userDataProperty;

	[Token(Token = "0x40009AF")]
	[FieldOffset(Offset = "0x180")]
	internal static readonly DataBindingProperty usageHintsProperty;

	[Token(Token = "0x40009B0")]
	[FieldOffset(Offset = "0x220")]
	internal static readonly DataBindingProperty layoutProperty;

	[Token(Token = "0x40009B1")]
	[FieldOffset(Offset = "0x2C0")]
	internal static readonly DataBindingProperty contentRectProperty;

	[Token(Token = "0x40009B2")]
	[FieldOffset(Offset = "0x360")]
	internal static readonly DataBindingProperty worldBoundProperty;

	[Token(Token = "0x40009B3")]
	[FieldOffset(Offset = "0x400")]
	internal static readonly DataBindingProperty localBoundProperty;

	[Token(Token = "0x40009B4")]
	[FieldOffset(Offset = "0x4A0")]
	internal static readonly DataBindingProperty worldTransformProperty;

	[Token(Token = "0x40009B5")]
	[FieldOffset(Offset = "0x540")]
	internal static readonly DataBindingProperty pickingModeProperty;

	[Token(Token = "0x40009B6")]
	[FieldOffset(Offset = "0x5E0")]
	internal static readonly DataBindingProperty nameProperty;

	[Token(Token = "0x40009B7")]
	[FieldOffset(Offset = "0x680")]
	internal static readonly DataBindingProperty enabledInHierarchyProperty;

	[Token(Token = "0x40009B8")]
	[FieldOffset(Offset = "0x720")]
	internal static readonly DataBindingProperty enabledSelfProperty;

	[Token(Token = "0x40009B9")]
	[FieldOffset(Offset = "0x7C0")]
	internal static readonly DataBindingProperty visibleProperty;

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x860")]
	internal static readonly DataBindingProperty panelProperty;

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x900")]
	internal static readonly DataBindingProperty visualTreeAssetSourceProperty;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x9A0")]
	internal static readonly DataBindingProperty childCountProperty;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0xA40")]
	internal static readonly DataBindingProperty styleSheetsProperty;

	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0xAE0")]
	internal static readonly DataBindingProperty tooltipProperty;

	[Token(Token = "0x40009BF")]
	[FieldOffset(Offset = "0xB80")]
	private static uint s_NextParentVersion;

	[Token(Token = "0x40009C0")]
	[FieldOffset(Offset = "0x360")]
	private uint m_NextParentCachedVersion;

	[Token(Token = "0x40009C1")]
	[FieldOffset(Offset = "0x364")]
	private uint m_NextParentRequiredVersion;

	[Token(Token = "0x40009C2")]
	[FieldOffset(Offset = "0x368")]
	private VisualElement m_CachedNextParentWithEventCallback;

	[Token(Token = "0x40009C3")]
	[FieldOffset(Offset = "0x370")]
	private int m_EventCallbackCategories;

	[Token(Token = "0x40009C4")]
	[FieldOffset(Offset = "0x374")]
	private int m_CachedEventCallbackParentCategories;

	[Token(Token = "0x40009C5")]
	[FieldOffset(Offset = "0x378")]
	private readonly int m_DefaultActionEventCategories;

	[Token(Token = "0x40009C6")]
	[FieldOffset(Offset = "0x37C")]
	private readonly int m_DefaultActionAtTargetEventCategories;

	[Token(Token = "0x40009C7")]
	internal const string k_RootVisualContainerName = "rootVisualContainer";

	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0x389")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CcacheAsBitmap_003Ek__BackingField;

	[Token(Token = "0x40009CB")]
	[FieldOffset(Offset = "0x390")]
	private VisualElement m_PhysicalParent;

	[Token(Token = "0x40009CC")]
	[FieldOffset(Offset = "0x398")]
	private VisualElement m_LogicalParent;

	[Token(Token = "0x40009CD")]
	[FieldOffset(Offset = "0xB88")]
	private static readonly List<VisualElement> s_EmptyList;

	[Token(Token = "0x40009CE")]
	[FieldOffset(Offset = "0x3A0")]
	private List<VisualElement> m_Children;

	[Token(Token = "0x40009D0")]
	[FieldOffset(Offset = "0x3B0")]
	private VisualTreeAsset m_VisualTreeAssetSource;

	[Token(Token = "0x40009D1")]
	[FieldOffset(Offset = "0xB90")]
	internal static CustomStyleAccess s_CustomStyleAccess;

	[Token(Token = "0x40009D2")]
	[FieldOffset(Offset = "0x3B8")]
	internal InlineStyleAccess inlineStyleAccess;

	[Token(Token = "0x40009D3")]
	[FieldOffset(Offset = "0x3C0")]
	internal ResolvedStyleAccess resolvedStyleAccess;

	[Token(Token = "0x40009D4")]
	[FieldOffset(Offset = "0x3C8")]
	internal List<StyleSheet> styleSheetList;

	[Token(Token = "0x40009D5")]
	[FieldOffset(Offset = "0xB98")]
	private static readonly Regex s_InternalStyleSheetPath;

	[Token(Token = "0x40009D6")]
	[FieldOffset(Offset = "0xBA0")]
	internal static readonly PropertyName tooltipPropertyKey;

	[Token(Token = "0x40009D7")]
	[FieldOffset(Offset = "0xBA8")]
	private static readonly Dictionary<Type, TypeData> s_TypeData;

	[Token(Token = "0x40009D8")]
	[FieldOffset(Offset = "0x3D0")]
	private TypeData m_TypeData;

	[Token(Token = "0x170004F8")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundColor
	{
		[Token(Token = "0x6001314")]
		[Address(RVA = "0x4D61C20", Offset = "0x4D61C20", VA = "0x4D61C20", Slot = "17")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170004F9")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomColor
	{
		[Token(Token = "0x6001315")]
		[Address(RVA = "0x4D61DF0", Offset = "0x4D61DF0", VA = "0x4D61DF0", Slot = "18")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170004FA")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomLeftRadius
	{
		[Token(Token = "0x6001316")]
		[Address(RVA = "0x4D61F20", Offset = "0x4D61F20", VA = "0x4D61F20", Slot = "19")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170004FB")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomRightRadius
	{
		[Token(Token = "0x6001317")]
		[Address(RVA = "0x4D62050", Offset = "0x4D62050", VA = "0x4D62050", Slot = "20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170004FC")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomWidth
	{
		[Token(Token = "0x6001318")]
		[Address(RVA = "0x4D62180", Offset = "0x4D62180", VA = "0x4D62180", Slot = "21")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170004FD")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderLeftColor
	{
		[Token(Token = "0x6001319")]
		[Address(RVA = "0x4D622B0", Offset = "0x4D622B0", VA = "0x4D622B0", Slot = "22")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170004FE")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderLeftWidth
	{
		[Token(Token = "0x600131A")]
		[Address(RVA = "0x4D623E0", Offset = "0x4D623E0", VA = "0x4D623E0", Slot = "23")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170004FF")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderRightColor
	{
		[Token(Token = "0x600131B")]
		[Address(RVA = "0x4D62510", Offset = "0x4D62510", VA = "0x4D62510", Slot = "24")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000500")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderRightWidth
	{
		[Token(Token = "0x600131C")]
		[Address(RVA = "0x4D62640", Offset = "0x4D62640", VA = "0x4D62640", Slot = "25")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000501")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopColor
	{
		[Token(Token = "0x600131D")]
		[Address(RVA = "0x4D62770", Offset = "0x4D62770", VA = "0x4D62770", Slot = "26")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000502")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopLeftRadius
	{
		[Token(Token = "0x600131E")]
		[Address(RVA = "0x4D628A0", Offset = "0x4D628A0", VA = "0x4D628A0", Slot = "27")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000503")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopRightRadius
	{
		[Token(Token = "0x600131F")]
		[Address(RVA = "0x4D629D0", Offset = "0x4D629D0", VA = "0x4D629D0", Slot = "28")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000504")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopWidth
	{
		[Token(Token = "0x6001320")]
		[Address(RVA = "0x4D62B00", Offset = "0x4D62B00", VA = "0x4D62B00", Slot = "29")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000505")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Ebottom
	{
		[Token(Token = "0x6001321")]
		[Address(RVA = "0x4D62C30", Offset = "0x4D62C30", VA = "0x4D62C30", Slot = "30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000506")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002Ecolor
	{
		[Token(Token = "0x6001322")]
		[Address(RVA = "0x4D62D60", Offset = "0x4D62D60", VA = "0x4D62D60", Slot = "31")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000507")]
	private DisplayStyle UnityEngine_002EUIElements_002EIResolvedStyle_002Edisplay
	{
		[Token(Token = "0x6001323")]
		[Address(RVA = "0x4D62E90", Offset = "0x4D62E90", VA = "0x4D62E90", Slot = "32")]
		get
		{
			return default(DisplayStyle);
		}
	}

	[Token(Token = "0x17000508")]
	private FlexDirection UnityEngine_002EUIElements_002EIResolvedStyle_002EflexDirection
	{
		[Token(Token = "0x6001324")]
		[Address(RVA = "0x4D62FC0", Offset = "0x4D62FC0", VA = "0x4D62FC0", Slot = "33")]
		get
		{
			return default(FlexDirection);
		}
	}

	[Token(Token = "0x17000509")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EflexGrow
	{
		[Token(Token = "0x6001325")]
		[Address(RVA = "0x4D630F0", Offset = "0x4D630F0", VA = "0x4D630F0", Slot = "34")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700050A")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EflexShrink
	{
		[Token(Token = "0x6001326")]
		[Address(RVA = "0x4D63220", Offset = "0x4D63220", VA = "0x4D63220", Slot = "35")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700050B")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eheight
	{
		[Token(Token = "0x6001327")]
		[Address(RVA = "0x4D63350", Offset = "0x4D63350", VA = "0x4D63350", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700050C")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eleft
	{
		[Token(Token = "0x6001328")]
		[Address(RVA = "0x4D63480", Offset = "0x4D63480", VA = "0x4D63480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700050D")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginBottom
	{
		[Token(Token = "0x6001329")]
		[Address(RVA = "0x4D635B0", Offset = "0x4D635B0", VA = "0x4D635B0", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700050E")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginLeft
	{
		[Token(Token = "0x600132A")]
		[Address(RVA = "0x4D636E0", Offset = "0x4D636E0", VA = "0x4D636E0", Slot = "39")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700050F")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginRight
	{
		[Token(Token = "0x600132B")]
		[Address(RVA = "0x4D63810", Offset = "0x4D63810", VA = "0x4D63810", Slot = "40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000510")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginTop
	{
		[Token(Token = "0x600132C")]
		[Address(RVA = "0x4D63940", Offset = "0x4D63940", VA = "0x4D63940", Slot = "41")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000511")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EminHeight
	{
		[Token(Token = "0x600132D")]
		[Address(RVA = "0x4D63A70", Offset = "0x4D63A70", VA = "0x4D63A70", Slot = "42")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x17000512")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EminWidth
	{
		[Token(Token = "0x600132E")]
		[Address(RVA = "0x4D63BA0", Offset = "0x4D63BA0", VA = "0x4D63BA0", Slot = "43")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x17000513")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eopacity
	{
		[Token(Token = "0x600132F")]
		[Address(RVA = "0x4D63CD0", Offset = "0x4D63CD0", VA = "0x4D63CD0", Slot = "44")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000514")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingBottom
	{
		[Token(Token = "0x6001330")]
		[Address(RVA = "0x4D63E00", Offset = "0x4D63E00", VA = "0x4D63E00", Slot = "45")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000515")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingLeft
	{
		[Token(Token = "0x6001331")]
		[Address(RVA = "0x4D63F30", Offset = "0x4D63F30", VA = "0x4D63F30", Slot = "46")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000516")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingRight
	{
		[Token(Token = "0x6001332")]
		[Address(RVA = "0x4D64060", Offset = "0x4D64060", VA = "0x4D64060", Slot = "47")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000517")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingTop
	{
		[Token(Token = "0x6001333")]
		[Address(RVA = "0x4D64190", Offset = "0x4D64190", VA = "0x4D64190", Slot = "48")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000518")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eright
	{
		[Token(Token = "0x6001334")]
		[Address(RVA = "0x4D642C0", Offset = "0x4D642C0", VA = "0x4D642C0", Slot = "49")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000519")]
	private Scale UnityEngine_002EUIElements_002EIResolvedStyle_002Escale
	{
		[Token(Token = "0x6001335")]
		[Address(RVA = "0x4D643F0", Offset = "0x4D643F0", VA = "0x4D643F0", Slot = "50")]
		get
		{
			return default(Scale);
		}
	}

	[Token(Token = "0x1700051A")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Etop
	{
		[Token(Token = "0x6001336")]
		[Address(RVA = "0x4D64520", Offset = "0x4D64520", VA = "0x4D64520", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700051B")]
	private Vector3 UnityEngine_002EUIElements_002EIResolvedStyle_002EtransformOrigin
	{
		[Token(Token = "0x6001337")]
		[Address(RVA = "0x4D64650", Offset = "0x4D64650", VA = "0x4D64650", Slot = "52")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700051C")]
	private Vector3 UnityEngine_002EUIElements_002EIResolvedStyle_002Etranslate
	{
		[Token(Token = "0x6001338")]
		[Address(RVA = "0x4D64780", Offset = "0x4D64780", VA = "0x4D64780", Slot = "53")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700051D")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EunityBackgroundImageTintColor
	{
		[Token(Token = "0x6001339")]
		[Address(RVA = "0x4D648B0", Offset = "0x4D648B0", VA = "0x4D648B0", Slot = "54")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700051E")]
	private int UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceLeft
	{
		[Token(Token = "0x600133A")]
		[Address(RVA = "0x4D649E0", Offset = "0x4D649E0", VA = "0x4D649E0", Slot = "55")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700051F")]
	private int UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceRight
	{
		[Token(Token = "0x600133B")]
		[Address(RVA = "0x4D64B10", Offset = "0x4D64B10", VA = "0x4D64B10", Slot = "56")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000520")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceScale
	{
		[Token(Token = "0x600133C")]
		[Address(RVA = "0x4D64C40", Offset = "0x4D64C40", VA = "0x4D64C40", Slot = "57")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000521")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextOutlineColor
	{
		[Token(Token = "0x600133D")]
		[Address(RVA = "0x4D64D70", Offset = "0x4D64D70", VA = "0x4D64D70", Slot = "58")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000522")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextOutlineWidth
	{
		[Token(Token = "0x600133E")]
		[Address(RVA = "0x4D64EA0", Offset = "0x4D64EA0", VA = "0x4D64EA0", Slot = "59")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000523")]
	private Visibility UnityEngine_002EUIElements_002EIResolvedStyle_002Evisibility
	{
		[Token(Token = "0x600133F")]
		[Address(RVA = "0x4D64FD0", Offset = "0x4D64FD0", VA = "0x4D64FD0", Slot = "60")]
		get
		{
			return default(Visibility);
		}
	}

	[Token(Token = "0x17000524")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Ewidth
	{
		[Token(Token = "0x6001340")]
		[Address(RVA = "0x4D65100", Offset = "0x4D65100", VA = "0x4D65100", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000525")]
	internal bool hasRunningAnimations
	{
		[Token(Token = "0x6001341")]
		[Address(RVA = "0x4D65230", Offset = "0x4D65230", VA = "0x4D65230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000526")]
	internal bool hasCompletedAnimations
	{
		[Token(Token = "0x6001342")]
		[Address(RVA = "0x4D652E0", Offset = "0x4D652E0", VA = "0x4D652E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000527")]
	private int UnityEngine_002EUIElements_002EIStylePropertyAnimations_002ErunningAnimationCount
	{
		[Token(Token = "0x6001343")]
		[Address(RVA = "0x4D65380", Offset = "0x4D65380", VA = "0x4D65380", Slot = "82")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001344")]
		[Address(RVA = "0x4D65390", Offset = "0x4D65390", VA = "0x4D65390", Slot = "83")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000528")]
	private int UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EcompletedAnimationCount
	{
		[Token(Token = "0x6001345")]
		[Address(RVA = "0x4D653A0", Offset = "0x4D653A0", VA = "0x4D653A0", Slot = "84")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001346")]
		[Address(RVA = "0x4D653B0", Offset = "0x4D653B0", VA = "0x4D653B0", Slot = "85")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000529")]
	internal IStylePropertyAnimations styleAnimation
	{
		[Token(Token = "0x6001348")]
		[Address(RVA = "0x4D652D0", Offset = "0x4D652D0", VA = "0x4D652D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052A")]
	internal bool isCompositeRoot
	{
		[Token(Token = "0x6001362")]
		[Address(RVA = "0x4D67BD0", Offset = "0x4D67BD0", VA = "0x4D67BD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001363")]
		[Address(RVA = "0x4D67BE0", Offset = "0x4D67BE0", VA = "0x4D67BE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052B")]
	internal bool areAncestorsAndSelfDisplayed
	{
		[Token(Token = "0x6001364")]
		[Address(RVA = "0x4D67D90", Offset = "0x4D67D90", VA = "0x4D67D90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001365")]
		[Address(RVA = "0x4D67DA0", Offset = "0x4D67DA0", VA = "0x4D67DA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052C")]
	[CreateProperty]
	public string viewDataKey
	{
		[Token(Token = "0x6001366")]
		[Address(RVA = "0x4D67E40", Offset = "0x4D67E40", VA = "0x4D67E40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001367")]
		[Address(RVA = "0x4D67E50", Offset = "0x4D67E50", VA = "0x4D67E50")]
		set
		{
		}
	}

	[Token(Token = "0x1700052D")]
	internal bool enableViewDataPersistence
	{
		[Token(Token = "0x6001368")]
		[Address(RVA = "0x4D67F40", Offset = "0x4D67F40", VA = "0x4D67F40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700052E")]
	[CreateProperty]
	public object userData
	{
		[Token(Token = "0x6001369")]
		[Address(RVA = "0x4D67F50", Offset = "0x4D67F50", VA = "0x4D67F50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600136A")]
		[Address(RVA = "0x4D680B0", Offset = "0x4D680B0", VA = "0x4D680B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700052F")]
	public override bool canGrabFocus
	{
		[Token(Token = "0x600136B")]
		[Address(RVA = "0x4D68490", Offset = "0x4D68490", VA = "0x4D68490", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000530")]
	public override FocusController focusController
	{
		[Token(Token = "0x600136C")]
		[Address(RVA = "0x4D68780", Offset = "0x4D68780", VA = "0x4D68780", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000531")]
	[CreateProperty]
	public UsageHints usageHints
	{
		[Token(Token = "0x600136D")]
		[Address(RVA = "0x4D68840", Offset = "0x4D68840", VA = "0x4D68840")]
		get
		{
			return default(UsageHints);
		}
		[Token(Token = "0x600136E")]
		[Address(RVA = "0x4D68870", Offset = "0x4D68870", VA = "0x4D68870")]
		set
		{
		}
	}

	[Token(Token = "0x17000532")]
	internal RenderHints renderHints
	{
		[Token(Token = "0x600136F")]
		[Address(RVA = "0x4D68860", Offset = "0x4D68860", VA = "0x4D68860")]
		get
		{
			return default(RenderHints);
		}
		[Token(Token = "0x6001370")]
		[Address(RVA = "0x4D68AB0", Offset = "0x4D68AB0", VA = "0x4D68AB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000533")]
	public ITransform transform
	{
		[Token(Token = "0x6001372")]
		[Address(RVA = "0x4D68B20", Offset = "0x4D68B20", VA = "0x4D68B20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000534")]
	private Vector3 UnityEngine_002EUIElements_002EITransform_002Eposition
	{
		[Token(Token = "0x6001373")]
		[Address(RVA = "0x4D68B30", Offset = "0x4D68B30", VA = "0x4D68B30", Slot = "86")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6001374")]
		[Address(RVA = "0x4D68C60", Offset = "0x4D68C60", VA = "0x4D68C60", Slot = "87")]
		set
		{
		}
	}

	[Token(Token = "0x17000535")]
	private Vector3 UnityEngine_002EUIElements_002EITransform_002Escale
	{
		[Token(Token = "0x6001375")]
		[Address(RVA = "0x4D68F00", Offset = "0x4D68F00", VA = "0x4D68F00", Slot = "88")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000536")]
	internal bool isLayoutManual
	{
		[Token(Token = "0x6001376")]
		[Address(RVA = "0x4D69040", Offset = "0x4D69040", VA = "0x4D69040")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001377")]
		[Address(RVA = "0x4D69050", Offset = "0x4D69050", VA = "0x4D69050")]
		private set
		{
		}
	}

	[Token(Token = "0x17000537")]
	internal float scaledPixelsPerPoint
	{
		[Token(Token = "0x6001378")]
		[Address(RVA = "0x4D69080", Offset = "0x4D69080", VA = "0x4D69080")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000538")]
	[CreateProperty(ReadOnly = true)]
	public Rect layout
	{
		[Token(Token = "0x6001379")]
		[Address(RVA = "0x4D690A0", Offset = "0x4D690A0", VA = "0x4D690A0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600137A")]
		[Address(RVA = "0x4D69140", Offset = "0x4D69140", VA = "0x4D69140")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000539")]
	[CreateProperty(ReadOnly = true)]
	public Rect contentRect
	{
		[Token(Token = "0x600137C")]
		[Address(RVA = "0x4D6A080", Offset = "0x4D6A080", VA = "0x4D6A080")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700053A")]
	protected Rect paddingRect
	{
		[Token(Token = "0x600137D")]
		[Address(RVA = "0x4D6A4B0", Offset = "0x4D6A4B0", VA = "0x4D6A4B0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700053B")]
	internal bool isBoundingBoxDirty
	{
		[Token(Token = "0x600137E")]
		[Address(RVA = "0x4D6A9C0", Offset = "0x4D6A9C0", VA = "0x4D6A9C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600137F")]
		[Address(RVA = "0x4D6A9D0", Offset = "0x4D6A9D0", VA = "0x4D6A9D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700053C")]
	internal bool isWorldBoundingBoxDirty
	{
		[Token(Token = "0x6001380")]
		[Address(RVA = "0x4D6AA00", Offset = "0x4D6AA00", VA = "0x4D6AA00")]
		set
		{
		}
	}

	[Token(Token = "0x1700053D")]
	internal bool isWorldBoundingBoxOrDependenciesDirty
	{
		[Token(Token = "0x6001381")]
		[Address(RVA = "0x4D6AA30", Offset = "0x4D6AA30", VA = "0x4D6AA30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700053E")]
	internal Rect boundingBox
	{
		[Token(Token = "0x6001382")]
		[Address(RVA = "0x4D6AA40", Offset = "0x4D6AA40", VA = "0x4D6AA40")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700053F")]
	internal Rect worldBoundingBox
	{
		[Token(Token = "0x6001383")]
		[Address(RVA = "0x4D6AFC0", Offset = "0x4D6AFC0", VA = "0x4D6AFC0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000540")]
	private Rect boundingBoxInParentSpace
	{
		[Token(Token = "0x6001384")]
		[Address(RVA = "0x4D6B140", Offset = "0x4D6B140", VA = "0x4D6B140")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000541")]
	[CreateProperty(ReadOnly = true)]
	public Rect worldBound
	{
		[Token(Token = "0x6001387")]
		[Address(RVA = "0x4D6B1E0", Offset = "0x4D6B1E0", VA = "0x4D6B1E0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000542")]
	[CreateProperty(ReadOnly = true)]
	public Rect localBound
	{
		[Token(Token = "0x6001388")]
		[Address(RVA = "0x4D6B310", Offset = "0x4D6B310", VA = "0x4D6B310")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000543")]
	internal Rect rect
	{
		[Token(Token = "0x6001389")]
		[Address(RVA = "0x4D6A940", Offset = "0x4D6A940", VA = "0x4D6A940")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000544")]
	internal bool isWorldTransformDirty
	{
		[Token(Token = "0x600138A")]
		[Address(RVA = "0x4D6B3B0", Offset = "0x4D6B3B0", VA = "0x4D6B3B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600138B")]
		[Address(RVA = "0x4D6B3C0", Offset = "0x4D6B3C0", VA = "0x4D6B3C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000545")]
	internal bool isWorldTransformInverseDirty
	{
		[Token(Token = "0x600138C")]
		[Address(RVA = "0x4D6B3F0", Offset = "0x4D6B3F0", VA = "0x4D6B3F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000546")]
	internal bool isWorldTransformInverseOrDependenciesDirty
	{
		[Token(Token = "0x600138D")]
		[Address(RVA = "0x4D6B420", Offset = "0x4D6B420", VA = "0x4D6B420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000547")]
	[CreateProperty(ReadOnly = true)]
	public Matrix4x4 worldTransform
	{
		[Token(Token = "0x600138E")]
		[Address(RVA = "0x4D6B430", Offset = "0x4D6B430", VA = "0x4D6B430")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000548")]
	internal unsafe ref Matrix4x4 worldTransformRef
	{
		[Token(Token = "0x600138F")]
		[Address(RVA = "0x4D6B1C0", Offset = "0x4D6B1C0", VA = "0x4D6B1C0")]
		get
		{
			return ref *(Matrix4x4*)null;
		}
	}

	[Token(Token = "0x17000549")]
	internal unsafe ref Matrix4x4 worldTransformInverse
	{
		[Token(Token = "0x6001390")]
		[Address(RVA = "0x4D6B920", Offset = "0x4D6B920", VA = "0x4D6B920")]
		get
		{
			return ref *(Matrix4x4*)null;
		}
	}

	[Token(Token = "0x1700054A")]
	internal bool isWorldClipDirty
	{
		[Token(Token = "0x6001393")]
		[Address(RVA = "0x4D6BFB0", Offset = "0x4D6BFB0", VA = "0x4D6BFB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001394")]
		[Address(RVA = "0x4D6BFC0", Offset = "0x4D6BFC0", VA = "0x4D6BFC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700054B")]
	internal Rect worldClip
	{
		[Token(Token = "0x6001395")]
		[Address(RVA = "0x4D6BFF0", Offset = "0x4D6BFF0", VA = "0x4D6BFF0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700054C")]
	internal Rect worldClipMinusGroup
	{
		[Token(Token = "0x6001396")]
		[Address(RVA = "0x4D6C380", Offset = "0x4D6C380", VA = "0x4D6C380")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700054D")]
	internal bool worldClipIsInfinite
	{
		[Token(Token = "0x6001397")]
		[Address(RVA = "0x4D6C3B0", Offset = "0x4D6C3B0", VA = "0x4D6C3B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700054E")]
	internal PseudoStates pseudoStates
	{
		[Token(Token = "0x600139D")]
		[Address(RVA = "0x4D6D220", Offset = "0x4D6D220", VA = "0x4D6D220")]
		get
		{
			return default(PseudoStates);
		}
		[Token(Token = "0x600139E")]
		[Address(RVA = "0x4D6D230", Offset = "0x4D6D230", VA = "0x4D6D230")]
		set
		{
		}
	}

	[Token(Token = "0x1700054F")]
	internal int containedPointerIds
	{
		[Token(Token = "0x600139F")]
		[Address(RVA = "0x4D6D2B0", Offset = "0x4D6D2B0", VA = "0x4D6D2B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60013A0")]
		[Address(RVA = "0x4D6D2C0", Offset = "0x4D6D2C0", VA = "0x4D6D2C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000550")]
	[CreateProperty]
	public PickingMode pickingMode
	{
		[Token(Token = "0x60013A3")]
		[Address(RVA = "0x4D6D600", Offset = "0x4D6D600", VA = "0x4D6D600")]
		get
		{
			return default(PickingMode);
		}
		[Token(Token = "0x60013A4")]
		[Address(RVA = "0x4D6D610", Offset = "0x4D6D610", VA = "0x4D6D610")]
		set
		{
		}
	}

	[Token(Token = "0x17000551")]
	[CreateProperty]
	public string name
	{
		[Token(Token = "0x60013A5")]
		[Address(RVA = "0x4D6D6B0", Offset = "0x4D6D6B0", VA = "0x4D6D6B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013A6")]
		[Address(RVA = "0x4D6D6C0", Offset = "0x4D6D6C0", VA = "0x4D6D6C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000552")]
	internal List<string> classList
	{
		[Token(Token = "0x60013A7")]
		[Address(RVA = "0x4D6D780", Offset = "0x4D6D780", VA = "0x4D6D780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000553")]
	internal string fullTypeName
	{
		[Token(Token = "0x60013A8")]
		[Address(RVA = "0x4D6D840", Offset = "0x4D6D840", VA = "0x4D6D840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000554")]
	internal string typeName
	{
		[Token(Token = "0x60013A9")]
		[Address(RVA = "0x4D6D9A0", Offset = "0x4D6D9A0", VA = "0x4D6D9A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000555")]
	internal unsafe ref LayoutNode layoutNode
	{
		[Token(Token = "0x60013AA")]
		[Address(RVA = "0x4D60C40", Offset = "0x4D60C40", VA = "0x4D60C40")]
		get
		{
			return ref *(LayoutNode*)null;
		}
	}

	[Token(Token = "0x17000556")]
	internal unsafe ref ComputedStyle computedStyle
	{
		[Token(Token = "0x60013AB")]
		[Address(RVA = "0x4D60B90", Offset = "0x4D60B90", VA = "0x4D60B90")]
		get
		{
			return ref *(ComputedStyle*)null;
		}
	}

	[Token(Token = "0x17000557")]
	internal bool hasInlineStyle
	{
		[Token(Token = "0x60013AC")]
		[Address(RVA = "0x4D6D9C0", Offset = "0x4D6D9C0", VA = "0x4D6D9C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000558")]
	internal bool styleInitialized
	{
		[Token(Token = "0x60013AD")]
		[Address(RVA = "0x4D6D9D0", Offset = "0x4D6D9D0", VA = "0x4D6D9D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013AE")]
		[Address(RVA = "0x4D6D9E0", Offset = "0x4D6D9E0", VA = "0x4D6D9E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000559")]
	private bool isParentEnabledInHierarchy
	{
		[Token(Token = "0x60013BE")]
		[Address(RVA = "0x4D70BE0", Offset = "0x4D70BE0", VA = "0x4D70BE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700055A")]
	[CreateProperty(ReadOnly = true)]
	public bool enabledInHierarchy
	{
		[Token(Token = "0x60013BF")]
		[Address(RVA = "0x4D68770", Offset = "0x4D68770", VA = "0x4D68770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700055B")]
	[CreateProperty(ReadOnly = true)]
	public bool enabledSelf
	{
		[Token(Token = "0x60013C0")]
		[Address(RVA = "0x4D70FB0", Offset = "0x4D70FB0", VA = "0x4D70FB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013C1")]
		[Address(RVA = "0x4D70FC0", Offset = "0x4D70FC0", VA = "0x4D70FC0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700055C")]
	public LanguageDirection languageDirection
	{
		[Token(Token = "0x60013C4")]
		[Address(RVA = "0x4D71110", Offset = "0x4D71110", VA = "0x4D71110")]
		get
		{
			return default(LanguageDirection);
		}
	}

	[Token(Token = "0x1700055D")]
	internal LanguageDirection localLanguageDirection
	{
		[Token(Token = "0x60013C5")]
		[Address(RVA = "0x4D71120", Offset = "0x4D71120", VA = "0x4D71120")]
		get
		{
			return default(LanguageDirection);
		}
		[Token(Token = "0x60013C6")]
		[Address(RVA = "0x4D71130", Offset = "0x4D71130", VA = "0x4D71130")]
		set
		{
		}
	}

	[Token(Token = "0x1700055E")]
	[CreateProperty]
	public bool visible
	{
		[Token(Token = "0x60013C7")]
		[Address(RVA = "0x4D68630", Offset = "0x4D68630", VA = "0x4D68630")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013C8")]
		[Address(RVA = "0x4D71230", Offset = "0x4D71230", VA = "0x4D71230")]
		set
		{
		}
	}

	[Token(Token = "0x1700055F")]
	public Action<MeshGenerationContext> generateVisualContent
	{
		[Token(Token = "0x60013CA")]
		[Address(RVA = "0x4D71420", Offset = "0x4D71420", VA = "0x4D71420")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60013CB")]
		[Address(RVA = "0x4D71430", Offset = "0x4D71430", VA = "0x4D71430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000560")]
	internal bool requireMeasureFunction
	{
		[Token(Token = "0x60013D4")]
		[Address(RVA = "0x4D71BB0", Offset = "0x4D71BB0", VA = "0x4D71BB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013D5")]
		[Address(RVA = "0x4D71BC0", Offset = "0x4D71BC0", VA = "0x4D71BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000561")]
	internal RenderTargetMode subRenderTargetMode
	{
		[Token(Token = "0x60013EA")]
		[Address(RVA = "0x4D72780", Offset = "0x4D72780", VA = "0x4D72780")]
		get
		{
			return default(RenderTargetMode);
		}
	}

	[Token(Token = "0x17000562")]
	internal Material defaultMaterial
	{
		[Token(Token = "0x60013EB")]
		[Address(RVA = "0x4D72790", Offset = "0x4D72790", VA = "0x4D72790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000563")]
	internal VisualElement nextParentWithEventCallback
	{
		[Token(Token = "0x60013F9")]
		[Address(RVA = "0x4D761B0", Offset = "0x4D761B0", VA = "0x4D761B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000564")]
	internal int eventCallbackCategories
	{
		[Token(Token = "0x60013FB")]
		[Address(RVA = "0x4D76410", Offset = "0x4D76410", VA = "0x4D76410")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60013FC")]
		[Address(RVA = "0x4D76420", Offset = "0x4D76420", VA = "0x4D76420")]
		set
		{
		}
	}

	[Token(Token = "0x17000565")]
	internal int eventCallbackParentCategories
	{
		[Token(Token = "0x60013FD")]
		[Address(RVA = "0x4D76540", Offset = "0x4D76540", VA = "0x4D76540")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000566")]
	internal bool isEventCallbackParentCategoriesDirty
	{
		[Token(Token = "0x60013FE")]
		[Address(RVA = "0x4D76570", Offset = "0x4D76570", VA = "0x4D76570")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013FF")]
		[Address(RVA = "0x4D76660", Offset = "0x4D76660", VA = "0x4D76660")]
		set
		{
		}
	}

	[Token(Token = "0x17000567")]
	public IExperimentalFeatures experimental
	{
		[Token(Token = "0x6001407")]
		[Address(RVA = "0x4D76740", Offset = "0x4D76740", VA = "0x4D76740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000568")]
	private ITransitionAnimations UnityEngine_002EUIElements_002EIExperimentalFeatures_002Eanimation
	{
		[Token(Token = "0x6001408")]
		[Address(RVA = "0x4D76750", Offset = "0x4D76750", VA = "0x4D76750", Slot = "90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000569")]
	public Hierarchy hierarchy
	{
		[Token(Token = "0x6001409")]
		[Address(RVA = "0x4D76760", Offset = "0x4D76760", VA = "0x4D76760")]
		[CompilerGenerated]
		get
		{
			return default(Hierarchy);
		}
		[Token(Token = "0x600140A")]
		[Address(RVA = "0x4D76770", Offset = "0x4D76770", VA = "0x4D76770")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700056A")]
	internal bool isRootVisualContainer
	{
		[Token(Token = "0x600140B")]
		[Address(RVA = "0x4D76790", Offset = "0x4D76790", VA = "0x4D76790")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600140C")]
		[Address(RVA = "0x4D767A0", Offset = "0x4D767A0", VA = "0x4D767A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700056B")]
	internal bool disableClipping
	{
		[Token(Token = "0x600140D")]
		[Address(RVA = "0x4D767B0", Offset = "0x4D767B0", VA = "0x4D767B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600140E")]
		[Address(RVA = "0x4D767C0", Offset = "0x4D767C0", VA = "0x4D767C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700056C")]
	internal bool disableRendering
	{
		[Token(Token = "0x6001410")]
		[Address(RVA = "0x4D767F0", Offset = "0x4D767F0", VA = "0x4D767F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001411")]
		[Address(RVA = "0x4D76800", Offset = "0x4D76800", VA = "0x4D76800")]
		set
		{
		}
	}

	[Token(Token = "0x1700056D")]
	public VisualElement parent
	{
		[Token(Token = "0x6001412")]
		[Address(RVA = "0x4D68620", Offset = "0x4D68620", VA = "0x4D68620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056E")]
	internal BaseVisualElementPanel elementPanel
	{
		[Token(Token = "0x6001413")]
		[Address(RVA = "0x4D76860", Offset = "0x4D76860", VA = "0x4D76860")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001414")]
		[Address(RVA = "0x4D76870", Offset = "0x4D76870", VA = "0x4D76870")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700056F")]
	[CreateProperty(ReadOnly = true)]
	public IPanel panel
	{
		[Token(Token = "0x6001415")]
		[Address(RVA = "0x4D68830", Offset = "0x4D68830", VA = "0x4D68830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000570")]
	public virtual VisualElement contentContainer
	{
		[Token(Token = "0x6001416")]
		[Address(RVA = "0x4D76890", Offset = "0x4D76890", VA = "0x4D76890", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000571")]
	[CreateProperty(ReadOnly = true)]
	public VisualTreeAsset visualTreeAssetSource
	{
		[Token(Token = "0x6001417")]
		[Address(RVA = "0x4D768A0", Offset = "0x4D768A0", VA = "0x4D768A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001418")]
		[Address(RVA = "0x4D768B0", Offset = "0x4D768B0", VA = "0x4D768B0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000572")]
	public VisualElement this[int key]
	{
		[Token(Token = "0x600141E")]
		[Address(RVA = "0x4D775B0", Offset = "0x4D775B0", VA = "0x4D775B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000573")]
	[CreateProperty(ReadOnly = true)]
	public int childCount
	{
		[Token(Token = "0x600141F")]
		[Address(RVA = "0x4D776B0", Offset = "0x4D776B0", VA = "0x4D776B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000574")]
	private Vector3 positionWithLayout
	{
		[Token(Token = "0x6001433")]
		[Address(RVA = "0x4D6B9F0", Offset = "0x4D6B9F0", VA = "0x4D6B9F0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000575")]
	internal bool hasDefaultRotationAndScale
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001435")]
		[Address(RVA = "0x4D787A0", Offset = "0x4D787A0", VA = "0x4D787A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000576")]
	public IVisualElementScheduler schedule
	{
		[Token(Token = "0x6001441")]
		[Address(RVA = "0x4D79030", Offset = "0x4D79030", VA = "0x4D79030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000577")]
	[CreateProperty]
	public IStyle style
	{
		[Token(Token = "0x6001444")]
		[Address(RVA = "0x4D68E70", Offset = "0x4D68E70", VA = "0x4D68E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000578")]
	[CreateProperty]
	public IResolvedStyle resolvedStyle
	{
		[Token(Token = "0x6001445")]
		[Address(RVA = "0x4D61D50", Offset = "0x4D61D50", VA = "0x4D61D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000579")]
	public ICustomStyle customStyle
	{
		[Token(Token = "0x6001446")]
		[Address(RVA = "0x4D791A0", Offset = "0x4D791A0", VA = "0x4D791A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057A")]
	[CreateProperty(ReadOnly = true)]
	public VisualElementStyleSheetSet styleSheets
	{
		[Token(Token = "0x6001447")]
		[Address(RVA = "0x4D79250", Offset = "0x4D79250", VA = "0x4D79250")]
		get
		{
			return default(VisualElementStyleSheetSet);
		}
	}

	[Token(Token = "0x1700057B")]
	[CreateProperty]
	public string tooltip
	{
		[Token(Token = "0x600144E")]
		[Address(RVA = "0x4D6EF20", Offset = "0x4D6EF20", VA = "0x4D6EF20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600144F")]
		[Address(RVA = "0x4D794D0", Offset = "0x4D794D0", VA = "0x4D794D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700057C")]
	private TypeData typeData
	{
		[Token(Token = "0x6001451")]
		[Address(RVA = "0x4D6D860", Offset = "0x4D6D860", VA = "0x4D6D860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x4D653C0", Offset = "0x4D653C0", VA = "0x4D653C0")]
	private IStylePropertyAnimationSystem GetStylePropertyAnimationSystem()
	{
		return null;
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x4D653F0", Offset = "0x4D653F0", VA = "0x4D653F0", Slot = "62")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, float from, float to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x4D65500", Offset = "0x4D65500", VA = "0x4D65500", Slot = "63")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, int from, int to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x4D65620", Offset = "0x4D65620", VA = "0x4D65620", Slot = "64")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Length from, Length to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x4D65740", Offset = "0x4D65740", VA = "0x4D65740", Slot = "65")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Color from, Color to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x4D65870", Offset = "0x4D65870", VA = "0x4D65870", Slot = "66")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStartEnum(StylePropertyId id, int from, int to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x4D65990", Offset = "0x4D65990", VA = "0x4D65990", Slot = "67")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Background from, Background to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x4D65B50", Offset = "0x4D65B50", VA = "0x4D65B50", Slot = "68")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, FontDefinition from, FontDefinition to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x4D65CB0", Offset = "0x4D65CB0", VA = "0x4D65CB0", Slot = "69")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Font from, Font to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x4D65DD0", Offset = "0x4D65DD0", VA = "0x4D65DD0", Slot = "70")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, TextShadow from, TextShadow to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x4D65F90", Offset = "0x4D65F90", VA = "0x4D65F90", Slot = "71")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Scale from, Scale to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x4D660C0", Offset = "0x4D660C0", VA = "0x4D660C0", Slot = "72")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Translate from, Translate to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x4D66270", Offset = "0x4D66270", VA = "0x4D66270", Slot = "73")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Rotate from, Rotate to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x4D66420", Offset = "0x4D66420", VA = "0x4D66420", Slot = "74")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, TransformOrigin from, TransformOrigin to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x4D665D0", Offset = "0x4D665D0", VA = "0x4D665D0", Slot = "75")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, BackgroundPosition from, BackgroundPosition to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x4D66710", Offset = "0x4D66710", VA = "0x4D66710", Slot = "76")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, BackgroundRepeat from, BackgroundRepeat to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x4D66830", Offset = "0x4D66830", VA = "0x4D66830", Slot = "77")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, BackgroundSize from, BackgroundSize to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001359")]
	[Address(RVA = "0x4D669E0", Offset = "0x4D669E0", VA = "0x4D669E0", Slot = "80")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002ECancelAnimation(StylePropertyId id)
	{
	}

	[Token(Token = "0x600135A")]
	[Address(RVA = "0x4D66AC0", Offset = "0x4D66AC0", VA = "0x4D66AC0", Slot = "81")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002ECancelAllAnimations()
	{
	}

	[Token(Token = "0x600135B")]
	[Address(RVA = "0x4D66CD0", Offset = "0x4D66CD0", VA = "0x4D66CD0", Slot = "78")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EUpdateAnimation(StylePropertyId id)
	{
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x4D66DB0", Offset = "0x4D66DB0", VA = "0x4D66DB0", Slot = "79")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EGetAllAnimations(List<StylePropertyId> outPropertyIds)
	{
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x4D66FD0", Offset = "0x4D66FD0", VA = "0x4D66FD0")]
	internal bool TryConvertLengthUnits(StylePropertyId id, ref Length from, ref Length to, int subPropertyIndex = 0)
	{
		return default(bool);
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x4D679C0", Offset = "0x4D679C0", VA = "0x4D679C0")]
	internal bool TryConvertTransformOriginUnits(ref TransformOrigin from, ref TransformOrigin to)
	{
		return default(bool);
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x4D67A50", Offset = "0x4D67A50", VA = "0x4D67A50")]
	internal bool TryConvertTranslateUnits(ref Translate from, ref Translate to)
	{
		return default(bool);
	}

	[Token(Token = "0x6001360")]
	[Address(RVA = "0x4D67AE0", Offset = "0x4D67AE0", VA = "0x4D67AE0")]
	internal bool TryConvertBackgroundSizeUnits(ref BackgroundSize from, ref BackgroundSize to)
	{
		return default(bool);
	}

	[Token(Token = "0x6001361")]
	[Address(RVA = "0x4D672A0", Offset = "0x4D672A0", VA = "0x4D672A0")]
	private float? GetParentSizeForLengthConversion(StylePropertyId id, int subPropertyIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x4D68B10", Offset = "0x4D68B10", VA = "0x4D68B10")]
	internal void MarkRenderHintsClean()
	{
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x4D69A10", Offset = "0x4D69A10", VA = "0x4D69A10")]
	internal void ClearManualLayout()
	{
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x4D6AA70", Offset = "0x4D6AA70", VA = "0x4D6AA70")]
	internal void UpdateBoundingBox()
	{
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x4D6AFF0", Offset = "0x4D6AFF0", VA = "0x4D6AFF0")]
	internal void UpdateWorldBoundingBox()
	{
	}

	[Token(Token = "0x6001391")]
	[Address(RVA = "0x4D6B490", Offset = "0x4D6B490", VA = "0x4D6B490")]
	internal void UpdateWorldTransform()
	{
	}

	[Token(Token = "0x6001392")]
	[Address(RVA = "0x4D6B990", Offset = "0x4D6B990", VA = "0x4D6B990")]
	internal void UpdateWorldTransformInverse()
	{
	}

	[Token(Token = "0x6001398")]
	[Address(RVA = "0x4D6C3D0", Offset = "0x4D6C3D0", VA = "0x4D6C3D0")]
	internal void EnsureWorldTransformAndClipUpToDate()
	{
	}

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x4D6C020", Offset = "0x4D6C020", VA = "0x4D6C020")]
	private void UpdateWorldClip()
	{
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x4D6D0F0", Offset = "0x4D6D0F0", VA = "0x4D6D0F0")]
	private Rect CombineClipRects(Rect rect, Rect parentRect)
	{
		return default(Rect);
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x4D6C400", Offset = "0x4D6C400", VA = "0x4D6C400")]
	private Rect SubstractBorderPadding(Rect worldRect)
	{
		return default(Rect);
	}

	[Token(Token = "0x600139C")]
	[Address(RVA = "0x4D6D110", Offset = "0x4D6D110", VA = "0x4D6D110")]
	internal static Rect ComputeAAAlignedBound(Rect position, Matrix4x4 mat)
	{
		return default(Rect);
	}

	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x4D6D2D0", Offset = "0x4D6D2D0", VA = "0x4D6D2D0")]
	private void UpdateHoverPseudoState()
	{
	}

	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x4D6D500", Offset = "0x4D6D500", VA = "0x4D6D500")]
	private static bool IsPartOfCapturedChain(VisualElement self, in IEventHandler capturingElement)
	{
		return default(bool);
	}

	[Token(Token = "0x60013AF")]
	[Address(RVA = "0x4D6DA10", Offset = "0x4D6DA10", VA = "0x4D6DA10")]
	private void ChangeIMGUIContainerCount(int delta)
	{
	}

	[Token(Token = "0x60013B0")]
	[Address(RVA = "0x4D6DA50", Offset = "0x4D6DA50", VA = "0x4D6DA50")]
	public VisualElement()
	{
	}

	[Token(Token = "0x60013B1")]
	[Address(RVA = "0x4D6E060", Offset = "0x4D6E060", VA = "0x4D6E060", Slot = "1")]
	~VisualElement()
	{
	}

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x4D6E1B0", Offset = "0x4D6E1B0", VA = "0x4D6E1B0", Slot = "10")]
	[EventInterest(new Type[]
	{
		typeof(MouseOverEvent),
		typeof(MouseOutEvent),
		typeof(MouseCaptureOutEvent),
		typeof(PointerEnterEvent),
		typeof(PointerLeaveEvent),
		typeof(PointerCaptureEvent),
		typeof(PointerCaptureOutEvent),
		typeof(BlurEvent),
		typeof(FocusEvent),
		typeof(TooltipEvent)
	})]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x60013B3")]
	[Address(RVA = "0x4D6EF10", Offset = "0x4D6EF10", VA = "0x4D6EF10", Slot = "93")]
	internal virtual Rect GetTooltipRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60013B4")]
	[Address(RVA = "0x4D6EE30", Offset = "0x4D6EE30", VA = "0x4D6EE30")]
	private void SetTooltip(TooltipEvent e)
	{
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x4D6F050", Offset = "0x4D6F050", VA = "0x4D6F050", Slot = "15")]
	public sealed override void Focus()
	{
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x4D6F0B0", Offset = "0x4D6F0B0", VA = "0x4D6F0B0")]
	internal void SetPanel(BaseVisualElementPanel p)
	{
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x4D6FDD0", Offset = "0x4D6FDD0", VA = "0x4D6FDD0")]
	private void WillChangePanel(BaseVisualElementPanel destinationPanel)
	{
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x4D70030", Offset = "0x4D70030", VA = "0x4D70030")]
	private void HasChangedPanel(BaseVisualElementPanel prevPanel)
	{
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x4D706E0", Offset = "0x4D706E0", VA = "0x4D706E0", Slot = "5")]
	public sealed override void SendEvent(EventBase e)
	{
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x4D70700", Offset = "0x4D70700", VA = "0x4D70700", Slot = "6")]
	internal sealed override void SendEvent(EventBase e, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x4D67E10", Offset = "0x4D67E10", VA = "0x4D67E10")]
	internal void IncrementVersion(VersionChangeType changeType)
	{
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x4D70720", Offset = "0x4D70720", VA = "0x4D70720")]
	internal void InvokeHierarchyChanged(HierarchyChangeType changeType)
	{
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x4D70740", Offset = "0x4D70740", VA = "0x4D70740")]
	private bool SetEnabledFromHierarchyPrivate(bool state)
	{
		return default(bool);
	}

	[Token(Token = "0x60013C2")]
	[Address(RVA = "0x4D6DFA0", Offset = "0x4D6DFA0", VA = "0x4D6DFA0")]
	public void SetEnabled(bool value)
	{
	}

	[Token(Token = "0x60013C3")]
	[Address(RVA = "0x4D71060", Offset = "0x4D71060", VA = "0x4D71060")]
	private void PropagateEnabledToChildren(bool value)
	{
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x4D713F0", Offset = "0x4D713F0", VA = "0x4D713F0")]
	public void MarkDirtyRepaint()
	{
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x4D71450", Offset = "0x4D71450", VA = "0x4D71450")]
	internal void InvokeGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60013CD")]
	[Address(RVA = "0x4D71630", Offset = "0x4D71630", VA = "0x4D71630")]
	internal void GetFullHierarchicalViewDataKey(StringBuilder key)
	{
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x4D716C0", Offset = "0x4D716C0", VA = "0x4D716C0")]
	internal string GetFullHierarchicalViewDataKey()
	{
		return null;
	}

	[Token(Token = "0x60013CF")]
	internal T GetOrCreateViewData<T>(object existing, string key) where T : class, new()
	{
		return null;
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x4D71740", Offset = "0x4D71740", VA = "0x4D71740")]
	internal void OverwriteFromViewData(object obj, string key)
	{
	}

	[Token(Token = "0x60013D1")]
	[Address(RVA = "0x4D71A60", Offset = "0x4D71A60", VA = "0x4D71A60")]
	internal void SaveViewData()
	{
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x4D71AE0", Offset = "0x4D71AE0", VA = "0x4D71AE0", Slot = "94")]
	internal virtual void OnViewDataReady()
	{
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x4D71AF0", Offset = "0x4D71AF0", VA = "0x4D71AF0", Slot = "95")]
	public virtual bool ContainsPoint(Vector2 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x4D71CB0", Offset = "0x4D71CB0", VA = "0x4D71CB0")]
	private void AssignMeasureFunction()
	{
	}

	[Token(Token = "0x60013D7")]
	[Address(RVA = "0x4D71D30", Offset = "0x4D71D30", VA = "0x4D71D30")]
	private void RemoveMeasureFunction()
	{
	}

	[Token(Token = "0x60013D8")]
	[Address(RVA = "0x4D71D60", Offset = "0x4D71D60", VA = "0x4D71D60", Slot = "96")]
	protected internal virtual Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60013D9")]
	[Address(RVA = "0x4D71D70", Offset = "0x4D71D70", VA = "0x4D71D70")]
	internal static void Measure(VisualElement ve, ref LayoutNode node, float width, LayoutMeasureMode widthMode, float height, LayoutMeasureMode heightMode, out LayoutSize result)
	{
	}

	[Token(Token = "0x60013DA")]
	[Address(RVA = "0x4D71EF0", Offset = "0x4D71EF0", VA = "0x4D71EF0")]
	private void FinalizeLayout()
	{
	}

	[Token(Token = "0x60013DB")]
	[Address(RVA = "0x4D71F50", Offset = "0x4D71F50", VA = "0x4D71F50")]
	internal void SetInlineRule(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x60013DC")]
	[Address(RVA = "0x4D72000", Offset = "0x4D72000", VA = "0x4D72000")]
	internal void SetComputedStyle(ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x60013DD")]
	[Address(RVA = "0x4D72220", Offset = "0x4D72220", VA = "0x4D72220", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x4D72450", Offset = "0x4D72450", VA = "0x4D72450")]
	internal List<string> GetClassesForIteration()
	{
		return null;
	}

	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x4D70D50", Offset = "0x4D70D50", VA = "0x4D70D50")]
	public void AddToClassList(string className)
	{
	}

	[Token(Token = "0x60013E0")]
	[Address(RVA = "0x4D70C10", Offset = "0x4D70C10", VA = "0x4D70C10")]
	public void RemoveFromClassList(string className)
	{
	}

	[Token(Token = "0x60013E1")]
	[Address(RVA = "0x4D70FA0", Offset = "0x4D70FA0", VA = "0x4D70FA0")]
	public void EnableInClassList(string className, bool enable)
	{
	}

	[Token(Token = "0x60013E2")]
	[Address(RVA = "0x4D72460", Offset = "0x4D72460", VA = "0x4D72460")]
	public bool ClassListContains(string cls)
	{
		return default(bool);
	}

	[Token(Token = "0x60013E3")]
	[Address(RVA = "0x4D72500", Offset = "0x4D72500", VA = "0x4D72500")]
	internal object GetProperty(PropertyName key)
	{
		return null;
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x4D726B0", Offset = "0x4D726B0", VA = "0x4D726B0")]
	internal void SetProperty(PropertyName key, object value)
	{
	}

	[Token(Token = "0x60013E5")]
	[Address(RVA = "0x4D72710", Offset = "0x4D72710", VA = "0x4D72710")]
	internal bool HasProperty(PropertyName key)
	{
		return default(bool);
	}

	[Token(Token = "0x60013E6")]
	[Address(RVA = "0x4D67FC0", Offset = "0x4D67FC0", VA = "0x4D67FC0")]
	private bool TryGetPropertyInternal(PropertyName key, out object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60013E7")]
	[Address(RVA = "0x4D72570", Offset = "0x4D72570", VA = "0x4D72570")]
	private static void CheckUserKeyArgument(PropertyName key)
	{
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x4D68220", Offset = "0x4D68220", VA = "0x4D68220")]
	private void SetPropertyInternal(PropertyName key, object value)
	{
	}

	[Token(Token = "0x60013E9")]
	[Address(RVA = "0x4D6E960", Offset = "0x4D6E960", VA = "0x4D6E960")]
	private void UpdateCursorStyle(long eventType)
	{
	}

	[Token(Token = "0x60013EC")]
	[Address(RVA = "0x4D727A0", Offset = "0x4D727A0", VA = "0x4D727A0")]
	private VisualElementAnimationSystem GetAnimationSystem()
	{
		return null;
	}

	[Token(Token = "0x60013ED")]
	[Address(RVA = "0x4D72820", Offset = "0x4D72820", VA = "0x4D72820")]
	internal void RegisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x60013EE")]
	[Address(RVA = "0x4D729D0", Offset = "0x4D729D0", VA = "0x4D729D0")]
	internal void UnregisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x4D704C0", Offset = "0x4D704C0", VA = "0x4D704C0")]
	private void UnregisterRunningAnimations()
	{
	}

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x4D70620", Offset = "0x4D70620", VA = "0x4D70620")]
	private void RegisterRunningAnimations()
	{
	}

	[Token(Token = "0x60013F1")]
	private static ValueAnimation<T> StartAnimation<T>(ValueAnimation<T> anim, Func<VisualElement, T> fromValueGetter, T to, int durationMs, Action<VisualElement, T> onValueChanged)
	{
		return null;
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x4D72AB0", Offset = "0x4D72AB0", VA = "0x4D72AB0")]
	private static void AssignStyleValues(VisualElement ve, StyleValues src)
	{
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x4D748E0", Offset = "0x4D748E0", VA = "0x4D748E0")]
	private StyleValues ReadCurrentValues(VisualElement ve, StyleValues targetValuesToRead)
	{
		return default(StyleValues);
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x4D75EA0", Offset = "0x4D75EA0", VA = "0x4D75EA0", Slot = "89")]
	private ValueAnimation<StyleValues> UnityEngine_002EUIElements_002EExperimental_002EITransitionAnimations_002EStart(StyleValues to, int durationMs)
	{
		return null;
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x4D75F90", Offset = "0x4D75F90", VA = "0x4D75F90")]
	private ValueAnimation<StyleValues> Start(Func<VisualElement, StyleValues> fromValueGetter, StyleValues to, int durationMs)
	{
		return null;
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x4D760E0", Offset = "0x4D760E0", VA = "0x4D760E0")]
	private void DirtyNextParentWithEventCallback()
	{
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x4D67CD0", Offset = "0x4D67CD0", VA = "0x4D67CD0")]
	private void SetAsNextParentWithEventCallback()
	{
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x4D76160", Offset = "0x4D76160", VA = "0x4D76160")]
	internal bool GetCachedNextParentWithEventCallback(out VisualElement nextParent)
	{
		return default(bool);
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x4D76370", Offset = "0x4D76370", VA = "0x4D76370")]
	private void PropagateCachedNextParentWithEventCallback(VisualElement nextParent, VisualElement stopParent)
	{
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x4D76580", Offset = "0x4D76580", VA = "0x4D76580")]
	private void UpdateCallbackParentCategories()
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x4D76690", Offset = "0x4D76690", VA = "0x4D76690")]
	internal bool HasEventCallbacks(EventCategory eventCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x4D766A0", Offset = "0x4D766A0", VA = "0x4D766A0")]
	internal bool HasParentEventCallbacksOrDefaultActions(EventCategory eventCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x4D70600", Offset = "0x4D70600", VA = "0x4D70600")]
	internal bool HasEventCallbacksOrDefaultActions(EventCategory eventCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x4D76700", Offset = "0x4D76700", VA = "0x4D76700")]
	internal bool HasEventCallbacksOrDefaultActionAtTarget(EventCategory eventCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x4D76720", Offset = "0x4D76720", VA = "0x4D76720")]
	internal bool HasDefaultActionAtTarget(EventCategory eventCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x4D76730", Offset = "0x4D76730", VA = "0x4D76730")]
	internal bool HasDefaultAction(EventCategory eventCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x4D6B190", Offset = "0x4D6B190", VA = "0x4D6B190")]
	internal bool ShouldClip()
	{
		return default(bool);
	}

	[Token(Token = "0x6001419")]
	[Address(RVA = "0x4D768D0", Offset = "0x4D768D0", VA = "0x4D768D0")]
	public void Add(VisualElement child)
	{
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x4D76A30", Offset = "0x4D76A30", VA = "0x4D76A30")]
	public void Insert(int index, VisualElement element)
	{
	}

	[Token(Token = "0x600141B")]
	[Address(RVA = "0x4D76EC0", Offset = "0x4D76EC0", VA = "0x4D76EC0")]
	public void Remove(VisualElement element)
	{
	}

	[Token(Token = "0x600141C")]
	[Address(RVA = "0x4D77020", Offset = "0x4D77020", VA = "0x4D77020")]
	public void Clear()
	{
	}

	[Token(Token = "0x600141D")]
	[Address(RVA = "0x4D77510", Offset = "0x4D77510", VA = "0x4D77510")]
	public VisualElement ElementAt(int index)
	{
		return null;
	}

	[Token(Token = "0x6001420")]
	[Address(RVA = "0x4D77780", Offset = "0x4D77780", VA = "0x4D77780")]
	public int IndexOf(VisualElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001421")]
	[Address(RVA = "0x4D77890", Offset = "0x4D77890", VA = "0x4D77890")]
	internal VisualElement ElementAtTreePath(List<int> childIndexes)
	{
		return null;
	}

	[Token(Token = "0x6001422")]
	[Address(RVA = "0x4D77AE0", Offset = "0x4D77AE0", VA = "0x4D77AE0")]
	internal bool FindElementInTree(VisualElement element, List<int> outChildIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001423")]
	[Address(RVA = "0x4D77C50", Offset = "0x4D77C50", VA = "0x4D77C50")]
	public IEnumerable<VisualElement> Children()
	{
		return null;
	}

	[Token(Token = "0x6001424")]
	[Address(RVA = "0x4D77D20", Offset = "0x4D77D20", VA = "0x4D77D20")]
	public void BringToFront()
	{
	}

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x4D77E60", Offset = "0x4D77E60", VA = "0x4D77E60")]
	public void SendToBack()
	{
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x4D77F50", Offset = "0x4D77F50", VA = "0x4D77F50")]
	public void PlaceBehind(VisualElement sibling)
	{
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x4D78150", Offset = "0x4D78150", VA = "0x4D78150")]
	public void RemoveFromHierarchy()
	{
	}

	[Token(Token = "0x6001428")]
	public T GetFirstOfType<T>() where T : class
	{
		return null;
	}

	[Token(Token = "0x6001429")]
	public T GetFirstAncestorOfType<T>() where T : class
	{
		return null;
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x4D78190", Offset = "0x4D78190", VA = "0x4D78190")]
	internal VisualElement GetFirstAncestorWhere(Predicate<VisualElement> predicate)
	{
		return null;
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x4D6D5C0", Offset = "0x4D6D5C0", VA = "0x4D6D5C0")]
	public bool Contains(VisualElement child)
	{
		return default(bool);
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x4D6FD10", Offset = "0x4D6FD10", VA = "0x4D6FD10")]
	private void GatherAllChildren(List<VisualElement> elements)
	{
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x4D78200", Offset = "0x4D78200", VA = "0x4D78200")]
	public VisualElement FindCommonAncestor(VisualElement other)
	{
		return null;
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x4D78380", Offset = "0x4D78380", VA = "0x4D78380")]
	internal VisualElement GetRoot()
	{
		return null;
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x4D78450", Offset = "0x4D78450", VA = "0x4D78450")]
	internal VisualElement GetRootVisualContainer()
	{
		return null;
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x4D78490", Offset = "0x4D78490", VA = "0x4D78490")]
	internal VisualElement GetNextElementDepthFirst()
	{
		return null;
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x4D785A0", Offset = "0x4D785A0", VA = "0x4D785A0")]
	internal VisualElement GetPreviousElementDepthFirst()
	{
		return null;
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x4D786A0", Offset = "0x4D786A0", VA = "0x4D786A0")]
	internal VisualElement RetargetElement(VisualElement retargetAgainst)
	{
		return null;
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x4D6BAB0", Offset = "0x4D6BAB0", VA = "0x4D6BAB0")]
	internal void GetPivotedMatrixWithLayout(out Matrix4x4 result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001436")]
	[Address(RVA = "0x4D78880", Offset = "0x4D78880", VA = "0x4D78880")]
	internal static float Min(float a, float b, float c, float d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001437")]
	[Address(RVA = "0x4D78890", Offset = "0x4D78890", VA = "0x4D78890")]
	internal static float Max(float a, float b, float c, float d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001438")]
	[Address(RVA = "0x4D788A0", Offset = "0x4D788A0", VA = "0x4D788A0")]
	private void TransformAlignedRectToParentSpace(ref Rect rect)
	{
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x4D78AE0", Offset = "0x4D78AE0", VA = "0x4D78AE0")]
	internal static Rect CalculateConservativeRect(ref Matrix4x4 matrix, Rect rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600143A")]
	[Address(RVA = "0x4D78DB0", Offset = "0x4D78DB0", VA = "0x4D78DB0")]
	internal static void TransformAlignedRect(ref Matrix4x4 matrix, ref Rect rect)
	{
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x4D78D50", Offset = "0x4D78D50", VA = "0x4D78D50")]
	internal static void OrderMinMaxRect(ref Rect rect)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600143C")]
	[Address(RVA = "0x4D78E30", Offset = "0x4D78E30", VA = "0x4D78E30")]
	internal static Vector2 MultiplyMatrix44Point2(ref Matrix4x4 lhs, Vector2 point)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600143D")]
	[Address(RVA = "0x4D78E60", Offset = "0x4D78E60", VA = "0x4D78E60")]
	internal static Vector2 MultiplyVector2(ref Matrix4x4 lhs, Vector2 vector)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x4D6BD80", Offset = "0x4D6BD80", VA = "0x4D6BD80")]
	internal static void MultiplyMatrix34(ref Matrix4x4 lhs, ref Matrix4x4 rhs, out Matrix4x4 res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600143F")]
	[Address(RVA = "0x4D78E80", Offset = "0x4D78E80", VA = "0x4D78E80")]
	private static void TranslateMatrix34(ref Matrix4x4 lhs, Vector3 rhs, out Matrix4x4 res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001440")]
	[Address(RVA = "0x4D78FA0", Offset = "0x4D78FA0", VA = "0x4D78FA0")]
	private static void TranslateMatrix34InPlace(ref Matrix4x4 lhs, Vector3 rhs)
	{
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x4D79040", Offset = "0x4D79040", VA = "0x4D79040", Slot = "91")]
	private IVisualElementScheduledItem UnityEngine_002EUIElements_002EIVisualElementScheduler_002EExecute(Action<TimerState> timerUpdateEvent)
	{
		return null;
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x4D790F0", Offset = "0x4D790F0", VA = "0x4D790F0", Slot = "92")]
	private IVisualElementScheduledItem UnityEngine_002EUIElements_002EIVisualElementScheduler_002EExecute(Action updateEvent)
	{
		return null;
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x4D79270", Offset = "0x4D79270", VA = "0x4D79270")]
	internal void AddStyleSheetPath(string sheetPath)
	{
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x4D60F20", Offset = "0x4D60F20", VA = "0x4D60F20")]
	internal StyleFloat ResolveLengthValue(Length length, bool isRow)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x4D61800", Offset = "0x4D61800", VA = "0x4D61800")]
	internal Vector3 ResolveTranslate()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x4D612A0", Offset = "0x4D612A0", VA = "0x4D612A0")]
	internal Vector3 ResolveTransformOrigin()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x4D78730", Offset = "0x4D78730", VA = "0x4D78730")]
	private Quaternion ResolveRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x4D78780", Offset = "0x4D78780", VA = "0x4D78780")]
	private Vector3 ResolveScale()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x4D79800", Offset = "0x4D79800", VA = "0x4D79800")]
	internal static TypeData GetOrCreateTypeData(Type t)
	{
		return null;
	}
}
