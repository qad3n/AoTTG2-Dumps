// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElement
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using Unity.Profiling;
using Unity.Properties;
using UnityEngine.Bindings;
using UnityEngine.UIElements.Experimental;
using UnityEngine.UIElements.Layout;
using UnityEngine.UIElements.StyleSheets;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x200037C")]
public class VisualElement : Focusable, IResolvedStyle, IStylePropertyAnimations, ITransitionAnimations, IExperimentalFeatures, IVisualElementScheduler
{
	[Token(Token = "0x200037D")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public class UxmlFactory : UxmlFactory<VisualElement, UxmlTraits>
	{
		[Token(Token = "0x6001B1C")]
		[Address(RVA = "0x310B830", Offset = "0x3109E30", VA = "0x18310B830")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200037E")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public class UxmlTraits : UnityEngine.UIElements.UxmlTraits
	{
		[Token(Token = "0x4000C4F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		protected UxmlStringAttributeDescription m_Name;

		[Token(Token = "0x4000C50")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private UxmlBoolAttributeDescription m_EnabledSelf;

		[Token(Token = "0x4000C51")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private UxmlStringAttributeDescription m_ViewDataKey;

		[Token(Token = "0x4000C52")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		protected UxmlEnumAttributeDescription<PickingMode> m_PickingMode;

		[Token(Token = "0x4000C53")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private UxmlStringAttributeDescription m_Tooltip;

		[Token(Token = "0x4000C54")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private UxmlEnumAttributeDescription<UsageHints> m_UsageHints;

		[Token(Token = "0x4000C56")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private UxmlIntAttributeDescription m_TabIndex;

		[Token(Token = "0x4000C58")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private UxmlStringAttributeDescription m_Class;

		[Token(Token = "0x4000C59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private UxmlStringAttributeDescription m_ContentContainer;

		[Token(Token = "0x4000C5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private UxmlStringAttributeDescription m_Style;

		[Token(Token = "0x4000C5B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private UxmlAssetAttributeDescription<Object> m_DataSource;

		[Token(Token = "0x4000C5C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private UxmlStringAttributeDescription m_DataSourcePath;

		[Token(Token = "0x1700079F")]
		protected UxmlIntAttributeDescription focusIndex
		{
			[Token(Token = "0x6001B1D")]
			[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A0")]
		protected UxmlBoolAttributeDescription focusable
		{
			[Token(Token = "0x6001B1E")]
			[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B1F")]
		[Address(RVA = "0x310B870", Offset = "0x3109E70", VA = "0x18310B870", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6001B20")]
		[Address(RVA = "0x310BDC0", Offset = "0x310A3C0", VA = "0x18310BDC0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x200037F")]
	public enum MeasureMode
	{
		[Token(Token = "0x4000C5E")]
		Undefined,
		[Token(Token = "0x4000C5F")]
		Exactly,
		[Token(Token = "0x4000C60")]
		AtMost
	}

	[Token(Token = "0x2000380")]
	public struct Hierarchy
	{
		[Token(Token = "0x4000C61")]
		private const string k_InvalidHierarchyChangeMsg = "Cannot modify VisualElement hierarchy during layout calculation";

		[Token(Token = "0x4000C62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly VisualElement m_Owner;

		[Token(Token = "0x170007A1")]
		public VisualElement parent
		{
			[Token(Token = "0x6001B21")]
			[Address(RVA = "0x30EE3B0", Offset = "0x30EC9B0", VA = "0x1830EE3B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A2")]
		internal List<VisualElement> children
		{
			[Token(Token = "0x6001B22")]
			[Address(RVA = "0x30ECD20", Offset = "0x30EB320", VA = "0x1830ECD20")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A3")]
		public int childCount
		{
			[Token(Token = "0x6001B2D")]
			[Address(RVA = "0x30EE360", Offset = "0x30EC960", VA = "0x1830EE360")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170007A4")]
		public VisualElement this[int key]
		{
			[Token(Token = "0x6001B2E")]
			[Address(RVA = "0x30ED2C0", Offset = "0x30EB8C0", VA = "0x1830ED2C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B23")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal Hierarchy(VisualElement element)
		{
		}

		[Token(Token = "0x6001B24")]
		[Address(RVA = "0x30ECB40", Offset = "0x30EB140", VA = "0x1830ECB40")]
		public void Add(VisualElement child)
		{
		}

		[Token(Token = "0x6001B25")]
		[Address(RVA = "0x30ED460", Offset = "0x30EBA60", VA = "0x1830ED460")]
		public void Insert(int index, VisualElement child)
		{
		}

		[Token(Token = "0x6001B26")]
		[Address(RVA = "0x30EE0A0", Offset = "0x30EC6A0", VA = "0x1830EE0A0")]
		public void Remove(VisualElement child)
		{
		}

		[Token(Token = "0x6001B27")]
		[Address(RVA = "0x30EDCF0", Offset = "0x30EC2F0", VA = "0x1830EDCF0")]
		public void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6001B28")]
		[Address(RVA = "0x30ECD40", Offset = "0x30EB340", VA = "0x1830ECD40")]
		public void Clear()
		{
		}

		[Token(Token = "0x6001B29")]
		[Address(RVA = "0x30ECBF0", Offset = "0x30EB1F0", VA = "0x1830ECBF0")]
		internal void BringToFront(VisualElement child)
		{
		}

		[Token(Token = "0x6001B2A")]
		[Address(RVA = "0x30EE1D0", Offset = "0x30EC7D0", VA = "0x1830EE1D0")]
		internal void SendToBack(VisualElement child)
		{
		}

		[Token(Token = "0x6001B2B")]
		[Address(RVA = "0x30ED920", Offset = "0x30EBF20", VA = "0x1830ED920")]
		internal void PlaceBehind(VisualElement child, VisualElement over)
		{
		}

		[Token(Token = "0x6001B2C")]
		[Address(RVA = "0x30ED830", Offset = "0x30EBE30", VA = "0x1830ED830")]
		private void MoveChildElement(VisualElement child, int currentIndex, int nextIndex)
		{
		}

		[Token(Token = "0x6001B2F")]
		[Address(RVA = "0x30ED400", Offset = "0x30EBA00", VA = "0x1830ED400")]
		public int IndexOf(VisualElement element)
		{
			return default(int);
		}

		[Token(Token = "0x6001B30")]
		[Address(RVA = "0x30ED2C0", Offset = "0x30EB8C0", VA = "0x1830ED2C0")]
		public VisualElement ElementAt(int index)
		{
			return null;
		}

		[Token(Token = "0x6001B31")]
		[Address(RVA = "0x30ECD20", Offset = "0x30EB320", VA = "0x1830ECD20")]
		public IEnumerable<VisualElement> Children()
		{
			return null;
		}

		[Token(Token = "0x6001B32")]
		[Address(RVA = "0x30EE270", Offset = "0x30EC870", VA = "0x1830EE270")]
		private void SetParent(VisualElement value)
		{
		}

		[Token(Token = "0x6001B33")]
		[Address(RVA = "0x30EDA20", Offset = "0x30EC020", VA = "0x1830EDA20")]
		private void PutChildAtIndex(VisualElement child, int index)
		{
		}

		[Token(Token = "0x6001B34")]
		[Address(RVA = "0x30EE020", Offset = "0x30EC620", VA = "0x1830EE020")]
		private void RemoveChildAtIndex(int index)
		{
		}

		[Token(Token = "0x6001B35")]
		[Address(RVA = "0x30EDC00", Offset = "0x30EC200", VA = "0x1830EDC00")]
		private void ReleaseChildList()
		{
		}

		[Token(Token = "0x6001B36")]
		[Address(RVA = "0x30ED3C0", Offset = "0x30EB9C0", VA = "0x1830ED3C0")]
		public bool Equals(Hierarchy other)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B37")]
		[Address(RVA = "0x30ED320", Offset = "0x30EB920", VA = "0x1830ED320", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B38")]
		[Address(RVA = "0x30ED3D0", Offset = "0x30EB9D0", VA = "0x1830ED3D0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6001B39")]
		[Address(RVA = "0x2F67B50", Offset = "0x2F66150", VA = "0x182F67B50")]
		public static bool operator ==(Hierarchy x, Hierarchy y)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000381")]
	private abstract class BaseVisualElementScheduledItem : ScheduledItem, IVisualElementScheduledItem
	{
		[Token(Token = "0x4000C64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public TimerEventScheduler scheduler;

		[Token(Token = "0x4000C67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private readonly EventCallback<AttachToPanelEvent> m_OnAttachToPanelCallback;

		[Token(Token = "0x4000C68")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private readonly EventCallback<DetachFromPanelEvent> m_OnDetachFromPanelCallback;

		[Token(Token = "0x170007A5")]
		public VisualElement element
		{
			[Token(Token = "0x6001B3A")]
			[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "14")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001B3B")]
			[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170007A6")]
		public bool isScheduled
		{
			[Token(Token = "0x6001B3C")]
			[Address(RVA = "0x30EA880", Offset = "0x30E8E80", VA = "0x1830EA880")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A7")]
		public bool isActive
		{
			[Token(Token = "0x6001B3D")]
			[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530", Slot = "7")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6001B3E")]
			[Address(RVA = "0x58A8C0", Offset = "0x588EC0", VA = "0x18058A8C0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170007A8")]
		public bool isDetaching
		{
			[Token(Token = "0x6001B3F")]
			[Address(RVA = "0x58A880", Offset = "0x588E80", VA = "0x18058A880")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6001B40")]
			[Address(RVA = "0x58AA20", Offset = "0x589020", VA = "0x18058AA20")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6001B41")]
		[Address(RVA = "0x30EA740", Offset = "0x30E8D40", VA = "0x1830EA740")]
		protected BaseVisualElementScheduledItem(VisualElement handler)
		{
		}

		[Token(Token = "0x6001B42")]
		[Address(RVA = "0x30EA5B0", Offset = "0x30E8BB0", VA = "0x1830EA5B0")]
		private void SetActive(bool action)
		{
		}

		[Token(Token = "0x6001B43")]
		[Address(RVA = "0x30EA490", Offset = "0x30E8A90", VA = "0x1830EA490")]
		private void SendActivation()
		{
		}

		[Token(Token = "0x6001B44")]
		[Address(RVA = "0x30EA540", Offset = "0x30E8B40", VA = "0x1830EA540")]
		private void SendDeactivation()
		{
		}

		[Token(Token = "0x6001B45")]
		[Address(RVA = "0x30EA090", Offset = "0x30E8690", VA = "0x1830EA090")]
		private void OnElementAttachToPanelCallback(AttachToPanelEvent evt)
		{
		}

		[Token(Token = "0x6001B46")]
		[Address(RVA = "0x30EA1B0", Offset = "0x30E87B0", VA = "0x1830EA1B0")]
		private void OnElementDetachFromPanelCallback(DetachFromPanelEvent evt)
		{
		}

		[Token(Token = "0x6001B47")]
		[Address(RVA = "0x30EA6B0", Offset = "0x30E8CB0", VA = "0x1830EA6B0", Slot = "11")]
		public IVisualElementScheduledItem StartingIn(long delayMs)
		{
			return null;
		}

		[Token(Token = "0x6001B48")]
		[Address(RVA = "0x30EA6C0", Offset = "0x30E8CC0", VA = "0x1830EA6C0", Slot = "13")]
		public IVisualElementScheduledItem Until(Func<bool> stopCondition)
		{
			return null;
		}

		[Token(Token = "0x6001B49")]
		[Address(RVA = "0x30E9EF0", Offset = "0x30E84F0", VA = "0x1830E9EF0", Slot = "12")]
		public IVisualElementScheduledItem Every(long intervalMs)
		{
			return null;
		}

		[Token(Token = "0x6001B4A")]
		[Address(RVA = "0x30EA210", Offset = "0x30E8810", VA = "0x1830EA210", Slot = "5")]
		internal override void OnItemUnscheduled()
		{
		}

		[Token(Token = "0x6001B4B")]
		[Address(RVA = "0x30EA3E0", Offset = "0x30E89E0", VA = "0x1830EA3E0", Slot = "8")]
		public void Resume()
		{
		}

		[Token(Token = "0x6001B4C")]
		[Address(RVA = "0x30EA330", Offset = "0x30E8930", VA = "0x1830EA330", Slot = "9")]
		public void Pause()
		{
		}

		[Token(Token = "0x6001B4D")]
		[Address(RVA = "0x30E9FB0", Offset = "0x30E85B0", VA = "0x1830E9FB0", Slot = "10")]
		public void ExecuteLater(long delayMs)
		{
		}

		[Token(Token = "0x6001B4E")]
		[Address(RVA = "0x30EA260", Offset = "0x30E8860", VA = "0x1830EA260")]
		public void OnPanelActivate()
		{
		}

		[Token(Token = "0x6001B4F")]
		[Address(RVA = "0x30EA2E0", Offset = "0x30E88E0", VA = "0x1830EA2E0")]
		public void OnPanelDeactivate()
		{
		}

		[Token(Token = "0x6001B50")]
		[Address(RVA = "0x30E9EB0", Offset = "0x30E84B0", VA = "0x1830E9EB0")]
		public bool CanBeActivated()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000382")]
	private abstract class VisualElementScheduledItem<ActionType> : BaseVisualElementScheduledItem
	{
		[Token(Token = "0x4000C69")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ActionType updateEvent;

		[Token(Token = "0x6001B51")]
		public VisualElementScheduledItem(VisualElement handler, ActionType upEvent)
		{
		}
	}

	[Token(Token = "0x2000383")]
	private class TimerStateScheduledItem : VisualElementScheduledItem<Action<TimerState>>
	{
		[Token(Token = "0x6001B52")]
		[Address(RVA = "0x30F63A0", Offset = "0x30F49A0", VA = "0x1830F63A0")]
		public TimerStateScheduledItem(VisualElement handler, Action<TimerState> updateEvent)
		{
		}

		[Token(Token = "0x6001B53")]
		[Address(RVA = "0x30F6360", Offset = "0x30F4960", VA = "0x1830F6360", Slot = "4")]
		public override void PerformTimerUpdate(TimerState state)
		{
		}
	}

	[Token(Token = "0x2000384")]
	private class SimpleScheduledItem : VisualElementScheduledItem<Action>
	{
		[Token(Token = "0x6001B54")]
		[Address(RVA = "0x30F61D0", Offset = "0x30F47D0", VA = "0x1830F61D0")]
		public SimpleScheduledItem(VisualElement handler, Action updateEvent)
		{
		}

		[Token(Token = "0x6001B55")]
		[Address(RVA = "0x30F61A0", Offset = "0x30F47A0", VA = "0x1830F61A0", Slot = "4")]
		public override void PerformTimerUpdate(TimerState state)
		{
		}
	}

	[Token(Token = "0x2000385")]
	internal class CustomStyleAccess : ICustomStyle
	{
		[Token(Token = "0x4000C6A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private Dictionary<string, StylePropertyValue> m_CustomProperties;

		[Token(Token = "0x4000C6B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private float m_DpiScaling;

		[Token(Token = "0x6001B56")]
		[Address(RVA = "0x30EB950", Offset = "0x30E9F50", VA = "0x1830EB950")]
		public void SetContext(Dictionary<string, StylePropertyValue> customProperties, float dpiScaling)
		{
		}

		[Token(Token = "0x6001B57")]
		[Address(RVA = "0x30EBD70", Offset = "0x30EA370", VA = "0x1830EBD70", Slot = "4")]
		public bool TryGetValue(CustomStyleProperty<float> property, out float value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B58")]
		[Address(RVA = "0x30EBA70", Offset = "0x30EA070", VA = "0x1830EBA70", Slot = "5")]
		public bool TryGetValue(CustomStyleProperty<int> property, out int value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B59")]
		[Address(RVA = "0x30EB980", Offset = "0x30E9F80", VA = "0x1830EB980", Slot = "6")]
		public bool TryGetValue(CustomStyleProperty<Color> property, out Color value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5A")]
		[Address(RVA = "0x30EBBA0", Offset = "0x30EA1A0", VA = "0x1830EBBA0", Slot = "7")]
		public bool TryGetValue(CustomStyleProperty<Texture2D> property, out Texture2D value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5B")]
		[Address(RVA = "0x30EBFB0", Offset = "0x30EA5B0", VA = "0x1830EBFB0", Slot = "8")]
		public bool TryGetValue(CustomStyleProperty<Sprite> property, out Sprite value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5C")]
		[Address(RVA = "0x30EBE90", Offset = "0x30EA490", VA = "0x1830EBE90", Slot = "9")]
		public bool TryGetValue(CustomStyleProperty<VectorImage> property, out VectorImage value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5D")]
		[Address(RVA = "0x30EC0D0", Offset = "0x30EA6D0", VA = "0x1830EC0D0", Slot = "10")]
		public bool TryGetValue(CustomStyleProperty<string> property, out string value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5E")]
		[Address(RVA = "0x30EBCC0", Offset = "0x30EA2C0", VA = "0x1830EBCC0")]
		private bool TryGetValue(string propertyName, StyleValueType valueType, out StylePropertyValue customProp)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5F")]
		[Address(RVA = "0x30EB870", Offset = "0x30E9E70", VA = "0x1830EB870")]
		private static void LogCustomPropertyWarning(string propertyName, StyleValueType valueType, StylePropertyValue customProp)
		{
		}

		[Token(Token = "0x6001B60")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public CustomStyleAccess()
		{
		}
	}

	[Token(Token = "0x2000386")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal class TypeData
	{
		[Token(Token = "0x4000C6D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string m_FullTypeName;

		[Token(Token = "0x4000C6E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private string m_TypeName;

		[Token(Token = "0x170007A9")]
		public Type type
		{
			[Token(Token = "0x6001B61")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007AA")]
		public string fullTypeName
		{
			[Token(Token = "0x6001B63")]
			[Address(RVA = "0x30F7750", Offset = "0x30F5D50", VA = "0x1830F7750")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007AB")]
		public string typeName
		{
			[Token(Token = "0x6001B64")]
			[Address(RVA = "0x30F77B0", Offset = "0x30F5DB0", VA = "0x1830F77B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B62")]
		[Address(RVA = "0x30F76E0", Offset = "0x30F5CE0", VA = "0x1830F76E0")]
		public TypeData(Type type)
		{
		}
	}

	[Token(Token = "0x4000BEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static uint s_NextId;

	[Token(Token = "0x4000BEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static List<string> s_EmptyClassList;

	[Token(Token = "0x4000BF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly PropertyName userDataPropertyKey;

	[Token(Token = "0x4000BF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly string disabledUssClassName;

	[Token(Token = "0x4000BF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string m_Name;

	[Token(Token = "0x4000BF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<string> m_ClassList;

	[Token(Token = "0x4000BF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Dictionary<PropertyName, object> m_PropertyBag;

	[Token(Token = "0x4000BF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private VisualElementFlags m_Flags;

	[Token(Token = "0x4000BF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string m_ViewDataKey;

	[Token(Token = "0x4000BF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private RenderHints m_RenderHints;

	[Token(Token = "0x4000BF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	internal Rect lastLayout;

	[Token(Token = "0x4000BF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	internal Rect lastPseudoPadding;

	[Token(Token = "0x4000BFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal RenderData renderData;

	[Token(Token = "0x4000BFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal RenderData nestedRenderData;

	[Token(Token = "0x4000BFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal int hierarchyDepth;

	[Token(Token = "0x4000BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
	internal int insertionIndex;

	[Token(Token = "0x4000BFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Rect m_Layout;

	[Token(Token = "0x4000BFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Rect m_BoundingBox;

	[Token(Token = "0x4000C00")]
	private const VisualElementFlags worldBoundingBoxDirtyDependencies = VisualElementFlags.WorldTransformDirty | VisualElementFlags.BoundingBoxDirty | VisualElementFlags.WorldBoundingBoxDirty;

	[Token(Token = "0x4000C01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Rect m_WorldBoundingBox;

	[Token(Token = "0x4000C02")]
	private const VisualElementFlags worldTransformInverseDirtyDependencies = VisualElementFlags.WorldTransformDirty | VisualElementFlags.WorldTransformInverseDirty;

	[Token(Token = "0x4000C03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Matrix4x4 m_WorldTransformCache;

	[Token(Token = "0x4000C04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private Matrix4x4 m_WorldTransformInverseCache;

	[Token(Token = "0x4000C05")]
	internal const float k_MinInvertibleDeterminantSquared = 1E-06f;

	[Token(Token = "0x4000C06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	internal PseudoStates triggerPseudoMask;

	[Token(Token = "0x4000C07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x154")]
	internal PseudoStates dependencyPseudoMask;

	[Token(Token = "0x4000C08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private PseudoStates m_PseudoStates;

	[Token(Token = "0x4000C0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private PickingMode m_PickingMode;

	[Token(Token = "0x4000C0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private LayoutNode m_LayoutNode;

	[Token(Token = "0x4000C0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	internal ComputedStyle m_Style;

	[Token(Token = "0x4000C0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleVariableContext variableContext;

	[Token(Token = "0x4000C0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	internal int inheritedStylesHash;

	[Token(Token = "0x4000C0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x204")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal readonly uint controlid;

	[Token(Token = "0x4000C10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	internal int imguiContainerDescendantCount;

	[Token(Token = "0x4000C11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal static int s_FinalizerCount;

	[Token(Token = "0x4000C12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20C")]
	private bool m_EnabledSelf;

	[Token(Token = "0x4000C13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private LanguageDirection m_LanguageDirection;

	[Token(Token = "0x4000C14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x214")]
	private LanguageDirection m_LocalLanguageDirection;

	[Token(Token = "0x4000C16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly ProfilerMarker k_GenerateVisualContentMarker;

	[Token(Token = "0x4000C17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private List<IValueAnimationUpdate> m_RunningAnimations;

	[Token(Token = "0x4000C18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal static readonly BindingId childCountProperty;

	[Token(Token = "0x4000C19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal static readonly BindingId contentRectProperty;

	[Token(Token = "0x4000C1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	internal static readonly BindingId dataSourcePathProperty;

	[Token(Token = "0x4000C1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	internal static readonly BindingId dataSourceProperty;

	[Token(Token = "0x4000C1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x290")]
	internal static readonly BindingId disablePlayModeTintProperty;

	[Token(Token = "0x4000C1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x328")]
	internal static readonly BindingId enabledInHierarchyProperty;

	[Token(Token = "0x4000C1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal static readonly BindingId enabledSelfProperty;

	[Token(Token = "0x4000C1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x458")]
	internal static readonly BindingId layoutProperty;

	[Token(Token = "0x4000C20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4F0")]
	internal static readonly BindingId languageDirectionProperty;

	[Token(Token = "0x4000C21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x588")]
	internal static readonly BindingId localBoundProperty;

	[Token(Token = "0x4000C22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x620")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal static readonly BindingId nameProperty;

	[Token(Token = "0x4000C23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6B8")]
	internal static readonly BindingId panelProperty;

	[Token(Token = "0x4000C24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x750")]
	internal static readonly BindingId pickingModeProperty;

	[Token(Token = "0x4000C25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7E8")]
	internal static readonly BindingId styleSheetsProperty;

	[Token(Token = "0x4000C26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x880")]
	internal static readonly BindingId tooltipProperty;

	[Token(Token = "0x4000C27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x918")]
	internal static readonly BindingId usageHintsProperty;

	[Token(Token = "0x4000C28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9B0")]
	internal static readonly BindingId userDataProperty;

	[Token(Token = "0x4000C29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA48")]
	internal static readonly BindingId viewDataKeyProperty;

	[Token(Token = "0x4000C2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAE0")]
	internal static readonly BindingId visibleProperty;

	[Token(Token = "0x4000C2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB78")]
	internal static readonly BindingId visualTreeAssetSourceProperty;

	[Token(Token = "0x4000C2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC10")]
	internal static readonly BindingId worldBoundProperty;

	[Token(Token = "0x4000C2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCA8")]
	internal static readonly BindingId worldTransformProperty;

	[Token(Token = "0x4000C2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x228")]
	private object m_DataSource;

	[Token(Token = "0x4000C2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x230")]
	private PathRef m_DataSourcePath;

	[Token(Token = "0x4000C30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	private List<Binding> m_Bindings;

	[Token(Token = "0x4000C31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x240")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Type _003CdataSourceType_003Ek__BackingField;

	[Token(Token = "0x4000C32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x248")]
	private readonly int m_TrickleDownHandleEventCategories;

	[Token(Token = "0x4000C33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24C")]
	private readonly int m_BubbleUpHandleEventCategories;

	[Token(Token = "0x4000C34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x250")]
	private int m_BubbleUpEventCallbackCategories;

	[Token(Token = "0x4000C35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x254")]
	private int m_TrickleDownEventCallbackCategories;

	[Token(Token = "0x4000C36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private int m_EventInterestSelfCategories;

	[Token(Token = "0x4000C37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25C")]
	private int m_CachedEventInterestParentCategories;

	[Token(Token = "0x4000C38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD40")]
	private static uint s_NextParentVersion;

	[Token(Token = "0x4000C39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x260")]
	private uint m_NextParentCachedVersion;

	[Token(Token = "0x4000C3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x264")]
	private uint m_NextParentRequiredVersion;

	[Token(Token = "0x4000C3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private VisualElement m_CachedNextParentWithEventInterests;

	[Token(Token = "0x4000C3C")]
	private const string k_VisualElementAssetPropertyName = "--unity-visual-element-asset-property";

	[Token(Token = "0x4000C3D")]
	private const string k_LinkedTemplateAssetOwnerPropertyName = "--unity-linked-template-asset-owner";

	[Token(Token = "0x4000C3E")]
	internal const string k_RootVisualContainerName = "rootVisualContainer";

	[Token(Token = "0x4000C40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x278")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private bool _003CcacheAsBitmap_003Ek__BackingField;

	[Token(Token = "0x4000C41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x280")]
	private VisualElement m_PhysicalParent;

	[Token(Token = "0x4000C42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x288")]
	private VisualElement m_LogicalParent;

	[Token(Token = "0x4000C43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD48")]
	private static readonly List<VisualElement> s_EmptyList;

	[Token(Token = "0x4000C44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x290")]
	private List<VisualElement> m_Children;

	[Token(Token = "0x4000C46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A0")]
	private VisualTreeAsset m_VisualTreeAssetSource;

	[Token(Token = "0x4000C47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD50")]
	internal static CustomStyleAccess s_CustomStyleAccess;

	[Token(Token = "0x4000C48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A8")]
	internal InlineStyleAccess inlineStyleAccess;

	[Token(Token = "0x4000C49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B0")]
	internal ResolvedStyleAccess resolvedStyleAccess;

	[Token(Token = "0x4000C4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal List<StyleSheet> styleSheetList;

	[Token(Token = "0x4000C4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD58")]
	private static readonly Regex s_InternalStyleSheetPath;

	[Token(Token = "0x4000C4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD60")]
	internal static readonly PropertyName tooltipPropertyKey;

	[Token(Token = "0x4000C4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD68")]
	private static readonly Dictionary<Type, TypeData> s_TypeData;

	[Token(Token = "0x4000C4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C0")]
	private TypeData m_TypeData;

	[Token(Token = "0x170006E4")]
	private Align UnityEngine_002EUIElements_002EIResolvedStyle_002EalignContent
	{
		[Token(Token = "0x6001984")]
		[Address(RVA = "0x30DC250", Offset = "0x30DA850", VA = "0x1830DC250", Slot = "21")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x170006E5")]
	private Align UnityEngine_002EUIElements_002EIResolvedStyle_002EalignItems
	{
		[Token(Token = "0x6001985")]
		[Address(RVA = "0x30DC2A0", Offset = "0x30DA8A0", VA = "0x1830DC2A0", Slot = "22")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x170006E6")]
	private Align UnityEngine_002EUIElements_002EIResolvedStyle_002EalignSelf
	{
		[Token(Token = "0x6001986")]
		[Address(RVA = "0x30DC300", Offset = "0x30DA900", VA = "0x1830DC300", Slot = "23")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x170006E7")]
	private Ratio UnityEngine_002EUIElements_002EIResolvedStyle_002EaspectRatio
	{
		[Token(Token = "0x6001987")]
		[Address(RVA = "0x30DC360", Offset = "0x30DA960", VA = "0x1830DC360", Slot = "24")]
		get
		{
			return default(Ratio);
		}
	}

	[Token(Token = "0x170006E8")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundColor
	{
		[Token(Token = "0x6001988")]
		[Address(RVA = "0x30DC430", Offset = "0x30DAA30", VA = "0x1830DC430", Slot = "25")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006E9")]
	private Background UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundImage
	{
		[Token(Token = "0x6001989")]
		[Address(RVA = "0x30DC500", Offset = "0x30DAB00", VA = "0x1830DC500", Slot = "26")]
		get
		{
			return default(Background);
		}
	}

	[Token(Token = "0x170006EA")]
	private BackgroundPosition UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundPositionX
	{
		[Token(Token = "0x600198A")]
		[Address(RVA = "0x30DC5E0", Offset = "0x30DABE0", VA = "0x1830DC5E0", Slot = "27")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x170006EB")]
	private BackgroundPosition UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundPositionY
	{
		[Token(Token = "0x600198B")]
		[Address(RVA = "0x30DC6C0", Offset = "0x30DACC0", VA = "0x1830DC6C0", Slot = "28")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x170006EC")]
	private BackgroundRepeat UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundRepeat
	{
		[Token(Token = "0x600198C")]
		[Address(RVA = "0x30DC7A0", Offset = "0x30DADA0", VA = "0x1830DC7A0", Slot = "29")]
		get
		{
			return default(BackgroundRepeat);
		}
	}

	[Token(Token = "0x170006ED")]
	private BackgroundSize UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundSize
	{
		[Token(Token = "0x600198D")]
		[Address(RVA = "0x30DC870", Offset = "0x30DAE70", VA = "0x1830DC870", Slot = "30")]
		get
		{
			return default(BackgroundSize);
		}
	}

	[Token(Token = "0x170006EE")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomColor
	{
		[Token(Token = "0x600198E")]
		[Address(RVA = "0x30DC950", Offset = "0x30DAF50", VA = "0x1830DC950", Slot = "31")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006EF")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomLeftRadius
	{
		[Token(Token = "0x600198F")]
		[Address(RVA = "0x30DCA20", Offset = "0x30DB020", VA = "0x1830DCA20", Slot = "32")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F0")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomRightRadius
	{
		[Token(Token = "0x6001990")]
		[Address(RVA = "0x30DCA80", Offset = "0x30DB080", VA = "0x1830DCA80", Slot = "33")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F1")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomWidth
	{
		[Token(Token = "0x6001991")]
		[Address(RVA = "0x30DCAE0", Offset = "0x30DB0E0", VA = "0x1830DCAE0", Slot = "34")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F2")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderLeftColor
	{
		[Token(Token = "0x6001992")]
		[Address(RVA = "0x30DCB40", Offset = "0x30DB140", VA = "0x1830DCB40", Slot = "35")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006F3")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderLeftWidth
	{
		[Token(Token = "0x6001993")]
		[Address(RVA = "0x30DCC10", Offset = "0x30DB210", VA = "0x1830DCC10", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F4")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderRightColor
	{
		[Token(Token = "0x6001994")]
		[Address(RVA = "0x30DCC70", Offset = "0x30DB270", VA = "0x1830DCC70", Slot = "37")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006F5")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderRightWidth
	{
		[Token(Token = "0x6001995")]
		[Address(RVA = "0x30DCD40", Offset = "0x30DB340", VA = "0x1830DCD40", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F6")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopColor
	{
		[Token(Token = "0x6001996")]
		[Address(RVA = "0x30DCDA0", Offset = "0x30DB3A0", VA = "0x1830DCDA0", Slot = "39")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006F7")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopLeftRadius
	{
		[Token(Token = "0x6001997")]
		[Address(RVA = "0x30DCE70", Offset = "0x30DB470", VA = "0x1830DCE70", Slot = "40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F8")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopRightRadius
	{
		[Token(Token = "0x6001998")]
		[Address(RVA = "0x30DCED0", Offset = "0x30DB4D0", VA = "0x1830DCED0", Slot = "41")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F9")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopWidth
	{
		[Token(Token = "0x6001999")]
		[Address(RVA = "0x30DCF30", Offset = "0x30DB530", VA = "0x1830DCF30", Slot = "42")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006FA")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Ebottom
	{
		[Token(Token = "0x600199A")]
		[Address(RVA = "0x30DCF90", Offset = "0x30DB590", VA = "0x1830DCF90", Slot = "43")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006FB")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002Ecolor
	{
		[Token(Token = "0x600199B")]
		[Address(RVA = "0x30DCFF0", Offset = "0x30DB5F0", VA = "0x1830DCFF0", Slot = "44")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006FC")]
	private DisplayStyle UnityEngine_002EUIElements_002EIResolvedStyle_002Edisplay
	{
		[Token(Token = "0x600199C")]
		[Address(RVA = "0x30DD0C0", Offset = "0x30DB6C0", VA = "0x1830DD0C0", Slot = "45")]
		get
		{
			return default(DisplayStyle);
		}
	}

	[Token(Token = "0x170006FD")]
	private IEnumerable<FilterFunction> UnityEngine_002EUIElements_002EIResolvedStyle_002Efilter
	{
		[Token(Token = "0x600199D")]
		[Address(RVA = "0x30DD120", Offset = "0x30DB720", VA = "0x1830DD120", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006FE")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EflexBasis
	{
		[Token(Token = "0x600199E")]
		[Address(RVA = "0x30DD180", Offset = "0x30DB780", VA = "0x1830DD180", Slot = "47")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x170006FF")]
	private FlexDirection UnityEngine_002EUIElements_002EIResolvedStyle_002EflexDirection
	{
		[Token(Token = "0x600199F")]
		[Address(RVA = "0x30DD1E0", Offset = "0x30DB7E0", VA = "0x1830DD1E0", Slot = "48")]
		get
		{
			return default(FlexDirection);
		}
	}

	[Token(Token = "0x17000700")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EflexGrow
	{
		[Token(Token = "0x60019A0")]
		[Address(RVA = "0x30DD240", Offset = "0x30DB840", VA = "0x1830DD240", Slot = "49")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000701")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EflexShrink
	{
		[Token(Token = "0x60019A1")]
		[Address(RVA = "0x30DD2A0", Offset = "0x30DB8A0", VA = "0x1830DD2A0", Slot = "50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000702")]
	private Wrap UnityEngine_002EUIElements_002EIResolvedStyle_002EflexWrap
	{
		[Token(Token = "0x60019A2")]
		[Address(RVA = "0x30DD300", Offset = "0x30DB900", VA = "0x1830DD300", Slot = "51")]
		get
		{
			return default(Wrap);
		}
	}

	[Token(Token = "0x17000703")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EfontSize
	{
		[Token(Token = "0x60019A3")]
		[Address(RVA = "0x30DD360", Offset = "0x30DB960", VA = "0x1830DD360", Slot = "52")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000704")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eheight
	{
		[Token(Token = "0x60019A4")]
		[Address(RVA = "0x30DD3C0", Offset = "0x30DB9C0", VA = "0x1830DD3C0", Slot = "53")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000705")]
	private Justify UnityEngine_002EUIElements_002EIResolvedStyle_002EjustifyContent
	{
		[Token(Token = "0x60019A5")]
		[Address(RVA = "0x30DD420", Offset = "0x30DBA20", VA = "0x1830DD420", Slot = "54")]
		get
		{
			return default(Justify);
		}
	}

	[Token(Token = "0x17000706")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eleft
	{
		[Token(Token = "0x60019A6")]
		[Address(RVA = "0x30DD480", Offset = "0x30DBA80", VA = "0x1830DD480", Slot = "55")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000707")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EletterSpacing
	{
		[Token(Token = "0x60019A7")]
		[Address(RVA = "0x30DD4E0", Offset = "0x30DBAE0", VA = "0x1830DD4E0", Slot = "56")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000708")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginBottom
	{
		[Token(Token = "0x60019A8")]
		[Address(RVA = "0x30DD540", Offset = "0x30DBB40", VA = "0x1830DD540", Slot = "57")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000709")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginLeft
	{
		[Token(Token = "0x60019A9")]
		[Address(RVA = "0x30DD5A0", Offset = "0x30DBBA0", VA = "0x1830DD5A0", Slot = "58")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700070A")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginRight
	{
		[Token(Token = "0x60019AA")]
		[Address(RVA = "0x30DD600", Offset = "0x30DBC00", VA = "0x1830DD600", Slot = "59")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700070B")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginTop
	{
		[Token(Token = "0x60019AB")]
		[Address(RVA = "0x30DD660", Offset = "0x30DBC60", VA = "0x1830DD660", Slot = "60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700070C")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EmaxHeight
	{
		[Token(Token = "0x60019AC")]
		[Address(RVA = "0x30DD6C0", Offset = "0x30DBCC0", VA = "0x1830DD6C0", Slot = "61")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x1700070D")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EmaxWidth
	{
		[Token(Token = "0x60019AD")]
		[Address(RVA = "0x30DD720", Offset = "0x30DBD20", VA = "0x1830DD720", Slot = "62")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x1700070E")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EminHeight
	{
		[Token(Token = "0x60019AE")]
		[Address(RVA = "0x30DD780", Offset = "0x30DBD80", VA = "0x1830DD780", Slot = "63")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x1700070F")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EminWidth
	{
		[Token(Token = "0x60019AF")]
		[Address(RVA = "0x30DD7E0", Offset = "0x30DBDE0", VA = "0x1830DD7E0", Slot = "64")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x17000710")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eopacity
	{
		[Token(Token = "0x60019B0")]
		[Address(RVA = "0x30DD840", Offset = "0x30DBE40", VA = "0x1830DD840", Slot = "65")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000711")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingBottom
	{
		[Token(Token = "0x60019B1")]
		[Address(RVA = "0x30DD8A0", Offset = "0x30DBEA0", VA = "0x1830DD8A0", Slot = "66")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000712")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingLeft
	{
		[Token(Token = "0x60019B2")]
		[Address(RVA = "0x30DD900", Offset = "0x30DBF00", VA = "0x1830DD900", Slot = "67")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000713")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingRight
	{
		[Token(Token = "0x60019B3")]
		[Address(RVA = "0x30DD960", Offset = "0x30DBF60", VA = "0x1830DD960", Slot = "68")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000714")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingTop
	{
		[Token(Token = "0x60019B4")]
		[Address(RVA = "0x30DD9C0", Offset = "0x30DBFC0", VA = "0x1830DD9C0", Slot = "69")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000715")]
	private Position UnityEngine_002EUIElements_002EIResolvedStyle_002Eposition
	{
		[Token(Token = "0x60019B5")]
		[Address(RVA = "0x30DDA20", Offset = "0x30DC020", VA = "0x1830DDA20", Slot = "70")]
		get
		{
			return default(Position);
		}
	}

	[Token(Token = "0x17000716")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eright
	{
		[Token(Token = "0x60019B6")]
		[Address(RVA = "0x30DDA80", Offset = "0x30DC080", VA = "0x1830DDA80", Slot = "71")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000717")]
	private Rotate UnityEngine_002EUIElements_002EIResolvedStyle_002Erotate
	{
		[Token(Token = "0x60019B7")]
		[Address(RVA = "0x30DDAE0", Offset = "0x30DC0E0", VA = "0x1830DDAE0", Slot = "72")]
		get
		{
			return default(Rotate);
		}
	}

	[Token(Token = "0x17000718")]
	private Scale UnityEngine_002EUIElements_002EIResolvedStyle_002Escale
	{
		[Token(Token = "0x60019B8")]
		[Address(RVA = "0x30DDBC0", Offset = "0x30DC1C0", VA = "0x1830DDBC0", Slot = "73")]
		get
		{
			return default(Scale);
		}
	}

	[Token(Token = "0x17000719")]
	private TextOverflow UnityEngine_002EUIElements_002EIResolvedStyle_002EtextOverflow
	{
		[Token(Token = "0x60019B9")]
		[Address(RVA = "0x30DDC90", Offset = "0x30DC290", VA = "0x1830DDC90", Slot = "74")]
		get
		{
			return default(TextOverflow);
		}
	}

	[Token(Token = "0x1700071A")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Etop
	{
		[Token(Token = "0x60019BA")]
		[Address(RVA = "0x30DDCF0", Offset = "0x30DC2F0", VA = "0x1830DDCF0", Slot = "75")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700071B")]
	private Vector3 UnityEngine_002EUIElements_002EIResolvedStyle_002EtransformOrigin
	{
		[Token(Token = "0x60019BB")]
		[Address(RVA = "0x30DDD50", Offset = "0x30DC350", VA = "0x1830DDD50", Slot = "76")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700071C")]
	private IEnumerable<TimeValue> UnityEngine_002EUIElements_002EIResolvedStyle_002EtransitionDelay
	{
		[Token(Token = "0x60019BC")]
		[Address(RVA = "0x30DDE30", Offset = "0x30DC430", VA = "0x1830DDE30", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071D")]
	private IEnumerable<TimeValue> UnityEngine_002EUIElements_002EIResolvedStyle_002EtransitionDuration
	{
		[Token(Token = "0x60019BD")]
		[Address(RVA = "0x30DDE90", Offset = "0x30DC490", VA = "0x1830DDE90", Slot = "78")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071E")]
	private IEnumerable<StylePropertyName> UnityEngine_002EUIElements_002EIResolvedStyle_002EtransitionProperty
	{
		[Token(Token = "0x60019BE")]
		[Address(RVA = "0x30DDEF0", Offset = "0x30DC4F0", VA = "0x1830DDEF0", Slot = "79")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071F")]
	private IEnumerable<EasingFunction> UnityEngine_002EUIElements_002EIResolvedStyle_002EtransitionTimingFunction
	{
		[Token(Token = "0x60019BF")]
		[Address(RVA = "0x30DDF50", Offset = "0x30DC550", VA = "0x1830DDF50", Slot = "80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000720")]
	private Vector3 UnityEngine_002EUIElements_002EIResolvedStyle_002Etranslate
	{
		[Token(Token = "0x60019C0")]
		[Address(RVA = "0x30DDFB0", Offset = "0x30DC5B0", VA = "0x1830DDFB0", Slot = "81")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000721")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EunityBackgroundImageTintColor
	{
		[Token(Token = "0x60019C1")]
		[Address(RVA = "0x30DE090", Offset = "0x30DC690", VA = "0x1830DE090", Slot = "82")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000722")]
	private EditorTextRenderingMode UnityEngine_002EUIElements_002EIResolvedStyle_002EunityEditorTextRenderingMode
	{
		[Token(Token = "0x60019C2")]
		[Address(RVA = "0x30DE160", Offset = "0x30DC760", VA = "0x1830DE160", Slot = "83")]
		get
		{
			return default(EditorTextRenderingMode);
		}
	}

	[Token(Token = "0x17000723")]
	private Font UnityEngine_002EUIElements_002EIResolvedStyle_002EunityFont
	{
		[Token(Token = "0x60019C3")]
		[Address(RVA = "0x30DE2F0", Offset = "0x30DC8F0", VA = "0x1830DE2F0", Slot = "84")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000724")]
	private FontDefinition UnityEngine_002EUIElements_002EIResolvedStyle_002EunityFontDefinition
	{
		[Token(Token = "0x60019C4")]
		[Address(RVA = "0x30DE1C0", Offset = "0x30DC7C0", VA = "0x1830DE1C0", Slot = "85")]
		get
		{
			return default(FontDefinition);
		}
	}

	[Token(Token = "0x17000725")]
	private FontStyle UnityEngine_002EUIElements_002EIResolvedStyle_002EunityFontStyleAndWeight
	{
		[Token(Token = "0x60019C5")]
		[Address(RVA = "0x30DE290", Offset = "0x30DC890", VA = "0x1830DE290", Slot = "86")]
		get
		{
			return default(FontStyle);
		}
	}

	[Token(Token = "0x17000726")]
	private MaterialDefinition UnityEngine_002EUIElements_002EIResolvedStyle_002EunityMaterial
	{
		[Token(Token = "0x60019C6")]
		[Address(RVA = "0x30DE3C0", Offset = "0x30DC9C0", VA = "0x1830DE3C0", Slot = "87")]
		get
		{
			return default(MaterialDefinition);
		}
	}

	[Token(Token = "0x17000727")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EunityParagraphSpacing
	{
		[Token(Token = "0x60019C7")]
		[Address(RVA = "0x30DE490", Offset = "0x30DCA90", VA = "0x1830DE490", Slot = "88")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000728")]
	private int UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceBottom
	{
		[Token(Token = "0x60019C8")]
		[Address(RVA = "0x30DE4F0", Offset = "0x30DCAF0", VA = "0x1830DE4F0", Slot = "89")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000729")]
	private int UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceLeft
	{
		[Token(Token = "0x60019C9")]
		[Address(RVA = "0x30DE550", Offset = "0x30DCB50", VA = "0x1830DE550", Slot = "90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700072A")]
	private int UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceRight
	{
		[Token(Token = "0x60019CA")]
		[Address(RVA = "0x30DE5B0", Offset = "0x30DCBB0", VA = "0x1830DE5B0", Slot = "91")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700072B")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceScale
	{
		[Token(Token = "0x60019CB")]
		[Address(RVA = "0x30DE610", Offset = "0x30DCC10", VA = "0x1830DE610", Slot = "92")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700072C")]
	private int UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceTop
	{
		[Token(Token = "0x60019CC")]
		[Address(RVA = "0x30DE670", Offset = "0x30DCC70", VA = "0x1830DE670", Slot = "93")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700072D")]
	private SliceType UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceType
	{
		[Token(Token = "0x60019CD")]
		[Address(RVA = "0x30DE6D0", Offset = "0x30DCCD0", VA = "0x1830DE6D0", Slot = "94")]
		get
		{
			return default(SliceType);
		}
	}

	[Token(Token = "0x1700072E")]
	private TextAnchor UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextAlign
	{
		[Token(Token = "0x60019CE")]
		[Address(RVA = "0x30DE730", Offset = "0x30DCD30", VA = "0x1830DE730", Slot = "95")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x1700072F")]
	private TextGeneratorType UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextGenerator
	{
		[Token(Token = "0x60019CF")]
		[Address(RVA = "0x30DE790", Offset = "0x30DCD90", VA = "0x1830DE790", Slot = "96")]
		get
		{
			return default(TextGeneratorType);
		}
	}

	[Token(Token = "0x17000730")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextOutlineColor
	{
		[Token(Token = "0x60019D0")]
		[Address(RVA = "0x30DE7F0", Offset = "0x30DCDF0", VA = "0x1830DE7F0", Slot = "97")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000731")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextOutlineWidth
	{
		[Token(Token = "0x60019D1")]
		[Address(RVA = "0x30DE8C0", Offset = "0x30DCEC0", VA = "0x1830DE8C0", Slot = "98")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000732")]
	private TextOverflowPosition UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextOverflowPosition
	{
		[Token(Token = "0x60019D2")]
		[Address(RVA = "0x30DE920", Offset = "0x30DCF20", VA = "0x1830DE920", Slot = "99")]
		get
		{
			return default(TextOverflowPosition);
		}
	}

	[Token(Token = "0x17000733")]
	private Visibility UnityEngine_002EUIElements_002EIResolvedStyle_002Evisibility
	{
		[Token(Token = "0x60019D3")]
		[Address(RVA = "0x30DE980", Offset = "0x30DCF80", VA = "0x1830DE980", Slot = "100")]
		get
		{
			return default(Visibility);
		}
	}

	[Token(Token = "0x17000734")]
	private WhiteSpace UnityEngine_002EUIElements_002EIResolvedStyle_002EwhiteSpace
	{
		[Token(Token = "0x60019D4")]
		[Address(RVA = "0x30DE9E0", Offset = "0x30DCFE0", VA = "0x1830DE9E0", Slot = "101")]
		get
		{
			return default(WhiteSpace);
		}
	}

	[Token(Token = "0x17000735")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Ewidth
	{
		[Token(Token = "0x60019D5")]
		[Address(RVA = "0x30DEA40", Offset = "0x30DD040", VA = "0x1830DEA40", Slot = "102")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000736")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EwordSpacing
	{
		[Token(Token = "0x60019D6")]
		[Address(RVA = "0x30DEAA0", Offset = "0x30DD0A0", VA = "0x1830DEAA0", Slot = "103")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000737")]
	internal bool hasRunningAnimations
	{
		[Token(Token = "0x60019D7")]
		[Address(RVA = "0x30E52B0", Offset = "0x30E38B0", VA = "0x1830E52B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000738")]
	internal bool hasCompletedAnimations
	{
		[Token(Token = "0x60019D8")]
		[Address(RVA = "0x30E50F0", Offset = "0x30E36F0", VA = "0x1830E50F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000739")]
	private int UnityEngine_002EUIElements_002EIStylePropertyAnimations_002ErunningAnimationCount
	{
		[Token(Token = "0x60019D9")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60", Slot = "127")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019DA")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560", Slot = "128")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700073A")]
	private int UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EcompletedAnimationCount
	{
		[Token(Token = "0x60019DB")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0", Slot = "129")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019DC")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10", Slot = "130")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700073B")]
	internal IStylePropertyAnimations styleAnimation
	{
		[Token(Token = "0x60019DE")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700073C")]
	internal bool isCompositeRoot
	{
		[Token(Token = "0x60019FB")]
		[Address(RVA = "0x30E53B0", Offset = "0x30E39B0", VA = "0x1830E53B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60019FC")]
		[Address(RVA = "0x30E71D0", Offset = "0x30E57D0", VA = "0x1830E71D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700073D")]
	internal bool areAncestorsAndSelfDisplayed
	{
		[Token(Token = "0x60019FD")]
		[Address(RVA = "0x30E4320", Offset = "0x30E2920", VA = "0x1830E4320")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60019FE")]
		[Address(RVA = "0x30E6B90", Offset = "0x30E5190", VA = "0x1830E6B90")]
		set
		{
		}
	}

	[Token(Token = "0x1700073E")]
	internal bool hasOneOrMorePointerCaptures
	{
		[Token(Token = "0x60019FF")]
		[Address(RVA = "0x30E52A0", Offset = "0x30E38A0", VA = "0x1830E52A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A00")]
		[Address(RVA = "0x30E7190", Offset = "0x30E5790", VA = "0x1830E7190")]
		set
		{
		}
	}

	[Token(Token = "0x1700073F")]
	internal VisualElementFlags flags
	{
		[Token(Token = "0x6001A01")]
		[Address(RVA = "0x30E4CD0", Offset = "0x30E32D0", VA = "0x1830E4CD0")]
		get
		{
			return default(VisualElementFlags);
		}
		[Token(Token = "0x6001A02")]
		[Address(RVA = "0x30E70C0", Offset = "0x30E56C0", VA = "0x1830E70C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000740")]
	[CreateProperty]
	public string viewDataKey
	{
		[Token(Token = "0x6001A03")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A04")]
		[Address(RVA = "0x30E8690", Offset = "0x30E6C90", VA = "0x1830E8690")]
		set
		{
		}
	}

	[Token(Token = "0x17000741")]
	internal bool enableViewDataPersistence
	{
		[Token(Token = "0x6001A05")]
		[Address(RVA = "0x30E4B90", Offset = "0x30E3190", VA = "0x1830E4B90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000742")]
	[CreateProperty]
	public object userData
	{
		[Token(Token = "0x6001A06")]
		[Address(RVA = "0x30E66E0", Offset = "0x30E4CE0", VA = "0x1830E66E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A07")]
		[Address(RVA = "0x30E8540", Offset = "0x30E6B40", VA = "0x1830E8540")]
		set
		{
		}
	}

	[Token(Token = "0x17000743")]
	public override bool canGrabFocus
	{
		[Token(Token = "0x6001A08")]
		[Address(RVA = "0x30E4490", Offset = "0x30E2A90", VA = "0x1830E4490", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000744")]
	public override FocusController focusController
	{
		[Token(Token = "0x6001A09")]
		[Address(RVA = "0x30E4D30", Offset = "0x30E3330", VA = "0x1830E4D30", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000745")]
	[CreateProperty]
	public bool disablePlayModeTint
	{
		[Token(Token = "0x6001A0A")]
		[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A0B")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		set
		{
		}
	}

	[Token(Token = "0x17000746")]
	internal Color playModeTintColor
	{
		[Token(Token = "0x6001A0C")]
		[Address(RVA = "0x30E5D30", Offset = "0x30E4330", VA = "0x1830E5D30")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000747")]
	[CreateProperty]
	public UsageHints usageHints
	{
		[Token(Token = "0x6001A0D")]
		[Address(RVA = "0x30E6370", Offset = "0x30E4970", VA = "0x1830E6370")]
		get
		{
			return default(UsageHints);
		}
		[Token(Token = "0x6001A0E")]
		[Address(RVA = "0x30E8280", Offset = "0x30E6880", VA = "0x1830E8280")]
		set
		{
		}
	}

	[Token(Token = "0x17000748")]
	internal RenderHints renderHints
	{
		[Token(Token = "0x6001A0F")]
		[Address(RVA = "0x30E5ED0", Offset = "0x30E44D0", VA = "0x1830E5ED0")]
		get
		{
			return default(RenderHints);
		}
		[Token(Token = "0x6001A10")]
		[Address(RVA = "0x30E7F30", Offset = "0x30E6530", VA = "0x1830E7F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000749")]
	internal bool useRenderTexture
	{
		[Token(Token = "0x6001A12")]
		[Address(RVA = "0x30E63D0", Offset = "0x30E49D0", VA = "0x1830E63D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700074A")]
	internal bool isLayoutManual
	{
		[Token(Token = "0x6001A13")]
		[Address(RVA = "0x30E5400", Offset = "0x30E3A00", VA = "0x1830E5400")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A14")]
		[Address(RVA = "0x30E7210", Offset = "0x30E5810", VA = "0x1830E7210")]
		private set
		{
		}
	}

	[Token(Token = "0x1700074B")]
	public float scaledPixelsPerPoint
	{
		[Token(Token = "0x6001A15")]
		[Address(RVA = "0x30E5F80", Offset = "0x30E4580", VA = "0x1830E5F80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700074C")]
	[Obsolete("scaledPixelsPerPoint_noChecks is deprecated. Use scaledPixelsPerPoint instead.")]
	internal float scaledPixelsPerPoint_noChecks
	{
		[Token(Token = "0x6001A16")]
		[Address(RVA = "0x30E6020", Offset = "0x30E4620", VA = "0x1830E6020")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700074D")]
	[CreateProperty(ReadOnly = true)]
	public Rect layout
	{
		[Token(Token = "0x6001A17")]
		[Address(RVA = "0x30E55F0", Offset = "0x30E3BF0", VA = "0x1830E55F0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6001A18")]
		[Address(RVA = "0x30E7340", Offset = "0x30E5940", VA = "0x1830E7340")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700074E")]
	internal bool hasSize
	{
		[Token(Token = "0x6001A1A")]
		[Address(RVA = "0x30E5300", Offset = "0x30E3900", VA = "0x1830E5300")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700074F")]
	[CreateProperty(ReadOnly = true)]
	public Rect contentRect
	{
		[Token(Token = "0x6001A1B")]
		[Address(RVA = "0x30E46F0", Offset = "0x30E2CF0", VA = "0x1830E46F0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000750")]
	protected Rect paddingRect
	{
		[Token(Token = "0x6001A1C")]
		[Address(RVA = "0x30E5B40", Offset = "0x30E4140", VA = "0x1830E5B40")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000751")]
	internal bool needs3DBounds
	{
		[Token(Token = "0x6001A1D")]
		[Address(RVA = "0x30E5950", Offset = "0x30E3F50", VA = "0x1830E5950")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A1E")]
		[Address(RVA = "0x30E7DD0", Offset = "0x30E63D0", VA = "0x1830E7DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000752")]
	internal bool isLocalBounds3DDirty
	{
		[Token(Token = "0x6001A1F")]
		[Address(RVA = "0x30E5410", Offset = "0x30E3A10", VA = "0x1830E5410")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A20")]
		[Address(RVA = "0x30E7230", Offset = "0x30E5830", VA = "0x1830E7230")]
		set
		{
		}
	}

	[Token(Token = "0x17000753")]
	internal bool isLocalBoundsWithoutNested3DDirty
	{
		[Token(Token = "0x6001A21")]
		[Address(RVA = "0x30E5420", Offset = "0x30E3A20", VA = "0x1830E5420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A22")]
		[Address(RVA = "0x30E7250", Offset = "0x30E5850", VA = "0x1830E7250")]
		set
		{
		}
	}

	[Token(Token = "0x17000754")]
	internal bool isBoundingBoxDirty
	{
		[Token(Token = "0x6001A23")]
		[Address(RVA = "0x30E53A0", Offset = "0x30E39A0", VA = "0x1830E53A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A24")]
		[Address(RVA = "0x30E71B0", Offset = "0x30E57B0", VA = "0x1830E71B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000755")]
	internal bool isWorldBoundingBoxDirty
	{
		[Token(Token = "0x6001A25")]
		[Address(RVA = "0x30E7270", Offset = "0x30E5870", VA = "0x1830E7270")]
		set
		{
		}
	}

	[Token(Token = "0x17000756")]
	internal bool isWorldBoundingBoxOrDependenciesDirty
	{
		[Token(Token = "0x6001A26")]
		[Address(RVA = "0x30E54E0", Offset = "0x30E3AE0", VA = "0x1830E54E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000757")]
	internal Rect boundingBox
	{
		[Token(Token = "0x6001A27")]
		[Address(RVA = "0x30E4440", Offset = "0x30E2A40", VA = "0x1830E4440")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000758")]
	internal Rect boundingBoxWithoutNested
	{
		[Token(Token = "0x6001A28")]
		[Address(RVA = "0x30E43A0", Offset = "0x30E29A0", VA = "0x1830E43A0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000759")]
	internal Rect worldBoundingBox
	{
		[Token(Token = "0x6001A29")]
		[Address(RVA = "0x30E6930", Offset = "0x30E4F30", VA = "0x1830E6930")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700075A")]
	private Rect boundingBoxInParentSpace
	{
		[Token(Token = "0x6001A2A")]
		[Address(RVA = "0x30E4340", Offset = "0x30E2940", VA = "0x1830E4340")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700075B")]
	internal Bounds localBounds3D
	{
		[Token(Token = "0x6001A2D")]
		[Address(RVA = "0x30E5800", Offset = "0x30E3E00", VA = "0x1830E5800")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700075C")]
	internal Bounds localBoundsPicking3D
	{
		[Token(Token = "0x6001A2E")]
		[Address(RVA = "0x30E58A0", Offset = "0x30E3EA0", VA = "0x1830E58A0")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700075D")]
	internal Bounds localBounds3DWithoutNested3D
	{
		[Token(Token = "0x6001A2F")]
		[Address(RVA = "0x30E5750", Offset = "0x30E3D50", VA = "0x1830E5750")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700075E")]
	[CreateProperty(ReadOnly = true)]
	public Rect worldBound
	{
		[Token(Token = "0x6001A31")]
		[Address(RVA = "0x30E67F0", Offset = "0x30E4DF0", VA = "0x1830E67F0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700075F")]
	[CreateProperty(ReadOnly = true)]
	public Rect localBound
	{
		[Token(Token = "0x6001A32")]
		[Address(RVA = "0x30E56B0", Offset = "0x30E3CB0", VA = "0x1830E56B0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000760")]
	internal Rect rect
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001A33")]
		[Address(RVA = "0x30E5E60", Offset = "0x30E4460", VA = "0x1830E5E60")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000761")]
	internal Vector2 layoutSize
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001A34")]
		[Address(RVA = "0x30E5590", Offset = "0x30E3B90", VA = "0x1830E5590")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000762")]
	internal Vector2 layoutPosition
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001A35")]
		[Address(RVA = "0x30E5530", Offset = "0x30E3B30", VA = "0x1830E5530")]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x17000763")]
	internal bool isWorldSpaceRootUIDocument
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001A36")]
		[Address(RVA = "0x30E54F0", Offset = "0x30E3AF0", VA = "0x1830E54F0")]
		get
		{
			return default(bool);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001A37")]
		[Address(RVA = "0x30E7290", Offset = "0x30E5890", VA = "0x1830E7290")]
		set
		{
		}
	}

	[Token(Token = "0x17000764")]
	internal bool isWorldTransformDirty
	{
		[Token(Token = "0x6001A38")]
		[Address(RVA = "0x1A16070", Offset = "0x1A14670", VA = "0x181A16070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A39")]
		[Address(RVA = "0x278EEB0", Offset = "0x278D4B0", VA = "0x18278EEB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000765")]
	internal bool isWorldTransformInverseDirty
	{
		[Token(Token = "0x6001A3A")]
		[Address(RVA = "0x278EED0", Offset = "0x278D4D0", VA = "0x18278EED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000766")]
	internal bool isWorldTransformInverseOrDependenciesDirty
	{
		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x30E5500", Offset = "0x30E3B00", VA = "0x1830E5500")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000767")]
	[CreateProperty(ReadOnly = true)]
	public Matrix4x4 worldTransform
	{
		[Token(Token = "0x6001A3D")]
		[Address(RVA = "0x30E6B20", Offset = "0x30E5120", VA = "0x1830E6B20")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000768")]
	internal unsafe ref Matrix4x4 worldTransformRef
	{
		[Token(Token = "0x6001A3E")]
		[Address(RVA = "0x30E6AF0", Offset = "0x30E50F0", VA = "0x1830E6AF0")]
		get
		{
			return ref *(Matrix4x4*)null;
		}
	}

	[Token(Token = "0x17000769")]
	internal unsafe ref Matrix4x4 worldTransformInverse
	{
		[Token(Token = "0x6001A3F")]
		[Address(RVA = "0x30E6AC0", Offset = "0x30E50C0", VA = "0x1830E6AC0")]
		get
		{
			return ref *(Matrix4x4*)null;
		}
	}

	[Token(Token = "0x1700076A")]
	internal Rect worldClip
	{
		[Token(Token = "0x6001A42")]
		[Address(RVA = "0x30E69F0", Offset = "0x30E4FF0", VA = "0x1830E69F0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700076B")]
	internal bool receivesHierarchyGeometryChangedEvents
	{
		[Token(Token = "0x6001A45")]
		[Address(RVA = "0x30E5E50", Offset = "0x30E4450", VA = "0x1830E5E50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A46")]
		[Address(RVA = "0x30E7F10", Offset = "0x30E6510", VA = "0x1830E7F10")]
		set
		{
		}
	}

	[Token(Token = "0x1700076C")]
	internal bool boundingBoxDirtiedSinceLastLayoutPass
	{
		[Token(Token = "0x6001A47")]
		[Address(RVA = "0x30E4330", Offset = "0x30E2930", VA = "0x1830E4330")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A48")]
		[Address(RVA = "0x30E6C00", Offset = "0x30E5200", VA = "0x1830E6C00")]
		set
		{
		}
	}

	[Token(Token = "0x1700076D")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal PseudoStates pseudoStates
	{
		[Token(Token = "0x6001A49")]
		[Address(RVA = "0x30E5E40", Offset = "0x30E4440", VA = "0x1830E5E40")]
		get
		{
			return default(PseudoStates);
		}
		[Token(Token = "0x6001A4A")]
		[Address(RVA = "0x30E7EA0", Offset = "0x30E64A0", VA = "0x1830E7EA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700076E")]
	internal int containedPointerIds
	{
		[Token(Token = "0x6001A4D")]
		[Address(RVA = "0x2CF3AE0", Offset = "0x2CF20E0", VA = "0x182CF3AE0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001A4E")]
		[Address(RVA = "0x2CF3E10", Offset = "0x2CF2410", VA = "0x182CF3E10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700076F")]
	[CreateProperty]
	public PickingMode pickingMode
	{
		[Token(Token = "0x6001A53")]
		[Address(RVA = "0x2182B20", Offset = "0x2181120", VA = "0x182182B20")]
		get
		{
			return default(PickingMode);
		}
		[Token(Token = "0x6001A54")]
		[Address(RVA = "0x30E7DF0", Offset = "0x30E63F0", VA = "0x1830E7DF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000770")]
	[CreateProperty]
	public string name
	{
		[Token(Token = "0x6001A55")]
		[Address(RVA = "0xAD2BE0", Offset = "0xAD11E0", VA = "0x180AD2BE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A56")]
		[Address(RVA = "0x30E7D10", Offset = "0x30E6310", VA = "0x1830E7D10")]
		set
		{
		}
	}

	[Token(Token = "0x17000771")]
	internal List<string> classList
	{
		[Token(Token = "0x6001A57")]
		[Address(RVA = "0x30E4620", Offset = "0x30E2C20", VA = "0x1830E4620")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000772")]
	internal string fullTypeName
	{
		[Token(Token = "0x6001A58")]
		[Address(RVA = "0x30E4DF0", Offset = "0x30E33F0", VA = "0x1830E4DF0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000773")]
	internal string typeName
	{
		[Token(Token = "0x6001A59")]
		[Address(RVA = "0x30E6340", Offset = "0x30E4940", VA = "0x1830E6340")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000774")]
	internal unsafe ref LayoutNode layoutNode
	{
		[Token(Token = "0x6001A5A")]
		[Address(RVA = "0x30E5520", Offset = "0x30E3B20", VA = "0x1830E5520")]
		get
		{
			return ref *(LayoutNode*)null;
		}
	}

	[Token(Token = "0x17000775")]
	internal unsafe ref ComputedStyle computedStyle
	{
		[Token(Token = "0x6001A5B")]
		[Address(RVA = "0x30E46E0", Offset = "0x30E2CE0", VA = "0x1830E46E0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return ref *(ComputedStyle*)null;
		}
	}

	[Token(Token = "0x17000776")]
	internal bool hasInlineStyle
	{
		[Token(Token = "0x6001A5C")]
		[Address(RVA = "0x30E5290", Offset = "0x30E3890", VA = "0x1830E5290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000777")]
	internal bool styleInitialized
	{
		[Token(Token = "0x6001A5D")]
		[Address(RVA = "0x30E6080", Offset = "0x30E4680", VA = "0x1830E6080")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A5E")]
		[Address(RVA = "0x30E8030", Offset = "0x30E6630", VA = "0x1830E8030")]
		set
		{
		}
	}

	[Token(Token = "0x17000778")]
	private bool isParentEnabledInHierarchy
	{
		[Token(Token = "0x6001A6D")]
		[Address(RVA = "0x30E5430", Offset = "0x30E3A30", VA = "0x1830E5430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000779")]
	[CreateProperty(ReadOnly = true)]
	public bool enabledInHierarchy
	{
		[Token(Token = "0x6001A6E")]
		[Address(RVA = "0x30E4BA0", Offset = "0x30E31A0", VA = "0x1830E4BA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700077A")]
	[CreateProperty]
	public bool enabledSelf
	{
		[Token(Token = "0x6001A6F")]
		[Address(RVA = "0x30E4BB0", Offset = "0x30E31B0", VA = "0x1830E4BB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A70")]
		[Address(RVA = "0x30E7030", Offset = "0x30E5630", VA = "0x1830E7030")]
		set
		{
		}
	}

	[Token(Token = "0x1700077B")]
	[CreateProperty]
	public LanguageDirection languageDirection
	{
		[Token(Token = "0x6001A73")]
		[Address(RVA = "0x30E5510", Offset = "0x30E3B10", VA = "0x1830E5510")]
		get
		{
			return default(LanguageDirection);
		}
		[Token(Token = "0x6001A74")]
		[Address(RVA = "0x30E72B0", Offset = "0x30E58B0", VA = "0x1830E72B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700077C")]
	internal LanguageDirection localLanguageDirection
	{
		[Token(Token = "0x6001A75")]
		[Address(RVA = "0x30E5940", Offset = "0x30E3F40", VA = "0x1830E5940")]
		get
		{
			return default(LanguageDirection);
		}
		[Token(Token = "0x6001A76")]
		[Address(RVA = "0x30E7C00", Offset = "0x30E6200", VA = "0x1830E7C00")]
		set
		{
		}
	}

	[Token(Token = "0x1700077D")]
	[CreateProperty]
	public bool visible
	{
		[Token(Token = "0x6001A77")]
		[Address(RVA = "0x30E6780", Offset = "0x30E4D80", VA = "0x1830E6780")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A78")]
		[Address(RVA = "0x30E8760", Offset = "0x30E6D60", VA = "0x1830E8760")]
		set
		{
		}
	}

	[Token(Token = "0x1700077E")]
	public Action<MeshGenerationContext> generateVisualContent
	{
		[Token(Token = "0x6001A7A")]
		[Address(RVA = "0x30E4E20", Offset = "0x30E3420", VA = "0x1830E4E20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A7B")]
		[Address(RVA = "0x30E7170", Offset = "0x30E5770", VA = "0x1830E7170")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700077F")]
	internal bool requireMeasureFunction
	{
		[Token(Token = "0x6001A84")]
		[Address(RVA = "0x30E5EE0", Offset = "0x30E44E0", VA = "0x1830E5EE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A85")]
		[Address(RVA = "0x30E7F90", Offset = "0x30E6590", VA = "0x1830E7F90")]
		set
		{
		}
	}

	[Token(Token = "0x17000780")]
	[CreateProperty]
	public object dataSource
	{
		[Token(Token = "0x6001AA4")]
		[Address(RVA = "0x30E4B50", Offset = "0x30E3150", VA = "0x1830E4B50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AA5")]
		[Address(RVA = "0x30E6EC0", Offset = "0x30E54C0", VA = "0x1830E6EC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000781")]
	[CreateProperty]
	public PropertyPath dataSourcePath
	{
		[Token(Token = "0x6001AA6")]
		[Address(RVA = "0x30E4A80", Offset = "0x30E3080", VA = "0x1830E4A80")]
		get
		{
			return default(PropertyPath);
		}
		[Token(Token = "0x6001AA7")]
		[Address(RVA = "0x30E6C20", Offset = "0x30E5220", VA = "0x1830E6C20")]
		set
		{
		}
	}

	[Token(Token = "0x17000782")]
	internal bool isDataSourcePathEmpty
	{
		[Token(Token = "0x6001AA8")]
		[Address(RVA = "0x30E53C0", Offset = "0x30E39C0", VA = "0x1830E53C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000783")]
	internal VisualElement nextParentWithEventInterests
	{
		[Token(Token = "0x6001AB2")]
		[Address(RVA = "0x30E5960", Offset = "0x30E3F60", VA = "0x1830E5960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000784")]
	internal int eventInterestParentCategories
	{
		[Token(Token = "0x6001AB5")]
		[Address(RVA = "0x30E4BC0", Offset = "0x30E31C0", VA = "0x1830E4BC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000785")]
	internal bool isEventInterestParentCategoriesDirty
	{
		[Token(Token = "0x6001AB6")]
		[Address(RVA = "0x30E53F0", Offset = "0x30E39F0", VA = "0x1830E53F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001AB7")]
		[Address(RVA = "0x30E71F0", Offset = "0x30E57F0", VA = "0x1830E71F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000786")]
	public IExperimentalFeatures experimental
	{
		[Token(Token = "0x6001AC4")]
		[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000787")]
	private ITransitionAnimations UnityEngine_002EUIElements_002EIExperimentalFeatures_002Eanimation
	{
		[Token(Token = "0x6001AC5")]
		[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0", Slot = "132")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000788")]
	public Hierarchy hierarchy
	{
		[Token(Token = "0x6001AC6")]
		[Address(RVA = "0x30E5390", Offset = "0x30E3990", VA = "0x1830E5390")]
		[CompilerGenerated]
		get
		{
			return default(Hierarchy);
		}
	}

	[Token(Token = "0x17000789")]
	internal bool isRootVisualContainer
	{
		[Token(Token = "0x6001AC7")]
		[Address(RVA = "0x30E54A0", Offset = "0x30E3AA0", VA = "0x1830E54A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700078A")]
	internal bool disableClipping
	{
		[Token(Token = "0x6001AC8")]
		[Address(RVA = "0x30E4B60", Offset = "0x30E3160", VA = "0x1830E4B60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001AC9")]
		[Address(RVA = "0x30E6FA0", Offset = "0x30E55A0", VA = "0x1830E6FA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700078B")]
	internal bool disableRendering
	{
		[Token(Token = "0x6001ACB")]
		[Address(RVA = "0x30E4B70", Offset = "0x30E3170", VA = "0x1830E4B70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001ACC")]
		[Address(RVA = "0x30E6FC0", Offset = "0x30E55C0", VA = "0x1830E6FC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700078C")]
	public VisualElement parent
	{
		[Token(Token = "0x6001ACD")]
		[Address(RVA = "0x30E5D20", Offset = "0x30E4320", VA = "0x1830E5D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078D")]
	internal BaseVisualElementPanel elementPanel
	{
		[Token(Token = "0x6001ACE")]
		[Address(RVA = "0x30E4B80", Offset = "0x30E3180", VA = "0x1830E4B80")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ACF")]
		[Address(RVA = "0x30E7010", Offset = "0x30E5610", VA = "0x1830E7010")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700078E")]
	[CreateProperty(ReadOnly = true)]
	public IPanel panel
	{
		[Token(Token = "0x6001AD0")]
		[Address(RVA = "0x30E5D10", Offset = "0x30E4310", VA = "0x1830E5D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078F")]
	public virtual VisualElement contentContainer
	{
		[Token(Token = "0x6001AD1")]
		[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000790")]
	[CreateProperty(ReadOnly = true)]
	public VisualTreeAsset visualTreeAssetSource
	{
		[Token(Token = "0x6001AD2")]
		[Address(RVA = "0x30E67E0", Offset = "0x30E4DE0", VA = "0x1830E67E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AD3")]
		[Address(RVA = "0x30E88E0", Offset = "0x30E6EE0", VA = "0x1830E88E0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x17000791")]
	public VisualElement this[int key]
	{
		[Token(Token = "0x6001ADB")]
		[Address(RVA = "0x30E4290", Offset = "0x30E2890", VA = "0x1830E4290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000792")]
	[CreateProperty(ReadOnly = true)]
	public int childCount
	{
		[Token(Token = "0x6001ADC")]
		[Address(RVA = "0x30E45A0", Offset = "0x30E2BA0", VA = "0x1830E45A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000793")]
	private Vector3 positionWithLayout
	{
		[Token(Token = "0x6001AF3")]
		[Address(RVA = "0x30E5D80", Offset = "0x30E4380", VA = "0x1830E5D80")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000794")]
	internal bool hasDefaultRotationAndScale
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001AF5")]
		[Address(RVA = "0x30E5140", Offset = "0x30E3740", VA = "0x1830E5140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000795")]
	internal bool has3DTransform
	{
		[Token(Token = "0x6001AF6")]
		[Address(RVA = "0x30E4F40", Offset = "0x30E3540", VA = "0x1830E4F40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000796")]
	private bool has3DTranslation
	{
		[Token(Token = "0x6001AF7")]
		[Address(RVA = "0x30E50B0", Offset = "0x30E36B0", VA = "0x1830E50B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000797")]
	private bool has3DRotation
	{
		[Token(Token = "0x6001AF8")]
		[Address(RVA = "0x30E4E30", Offset = "0x30E3430", VA = "0x1830E4E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000798")]
	public IVisualElementScheduler schedule
	{
		[Token(Token = "0x6001B0A")]
		[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000799")]
	[CreateProperty]
	public IStyle style
	{
		[Token(Token = "0x6001B0D")]
		[Address(RVA = "0x30E60C0", Offset = "0x30E46C0", VA = "0x1830E60C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700079A")]
	[CreateProperty]
	public IResolvedStyle resolvedStyle
	{
		[Token(Token = "0x6001B0E")]
		[Address(RVA = "0x30E5EF0", Offset = "0x30E44F0", VA = "0x1830E5EF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700079B")]
	public ICustomStyle customStyle
	{
		[Token(Token = "0x6001B0F")]
		[Address(RVA = "0x30E49F0", Offset = "0x30E2FF0", VA = "0x1830E49F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700079C")]
	[CreateProperty(ReadOnly = true)]
	public VisualElementStyleSheetSet styleSheets
	{
		[Token(Token = "0x6001B10")]
		[Address(RVA = "0x30E6090", Offset = "0x30E4690", VA = "0x1830E6090")]
		get
		{
			return default(VisualElementStyleSheetSet);
		}
	}

	[Token(Token = "0x1700079D")]
	[CreateProperty]
	public string tooltip
	{
		[Token(Token = "0x6001B17")]
		[Address(RVA = "0x30E6150", Offset = "0x30E4750", VA = "0x1830E6150")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B18")]
		[Address(RVA = "0x30E8050", Offset = "0x30E6650", VA = "0x1830E8050")]
		set
		{
		}
	}

	[Token(Token = "0x1700079E")]
	private TypeData typeData
	{
		[Token(Token = "0x6001B19")]
		[Address(RVA = "0x30E61E0", Offset = "0x30E47E0", VA = "0x1830E61E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x30D67A0", Offset = "0x30D4DA0", VA = "0x1830D67A0")]
	private IStylePropertyAnimationSystem GetStylePropertyAnimationSystem()
	{
		return null;
	}

	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x30DF6F0", Offset = "0x30DDCF0", VA = "0x1830DF6F0", Slot = "104")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, float from, float to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x30DFD70", Offset = "0x30DE370", VA = "0x1830DFD70", Slot = "105")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, int from, int to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x30DF170", Offset = "0x30DD770", VA = "0x1830DF170", Slot = "106")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Length from, Length to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x30DFF50", Offset = "0x30DE550", VA = "0x1830DFF50", Slot = "107")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Color from, Color to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E3")]
	[Address(RVA = "0x30DEE30", Offset = "0x30DD430", VA = "0x1830DEE30", Slot = "108")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStartEnum(StylePropertyId id, int from, int to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E4")]
	[Address(RVA = "0x30E04D0", Offset = "0x30DEAD0", VA = "0x1830E04D0", Slot = "109")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Background from, Background to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E5")]
	[Address(RVA = "0x30E0210", Offset = "0x30DE810", VA = "0x1830E0210", Slot = "110")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, FontDefinition from, FontDefinition to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x30DEEE0", Offset = "0x30DD4E0", VA = "0x1830DEEE0", Slot = "111")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Font from, Font to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E7")]
	[Address(RVA = "0x30E0360", Offset = "0x30DE960", VA = "0x1830E0360", Slot = "112")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, TextShadow from, TextShadow to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E8")]
	[Address(RVA = "0x30DF980", Offset = "0x30DDF80", VA = "0x1830DF980", Slot = "113")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Scale from, Scale to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E9")]
	[Address(RVA = "0x30E00A0", Offset = "0x30DE6A0", VA = "0x1830E00A0", Slot = "114")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Translate from, Translate to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x30DF580", Offset = "0x30DDB80", VA = "0x1830DF580", Slot = "115")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Rotate from, Rotate to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x30DF010", Offset = "0x30DD610", VA = "0x1830DF010", Slot = "116")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Ratio from, Ratio to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x30DFC00", Offset = "0x30DE200", VA = "0x1830DFC00", Slot = "117")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, TransformOrigin from, TransformOrigin to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x30DF410", Offset = "0x30DDA10", VA = "0x1830DF410", Slot = "118")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, BackgroundPosition from, BackgroundPosition to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EE")]
	[Address(RVA = "0x30DFE20", Offset = "0x30DE420", VA = "0x1830DFE20", Slot = "119")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, BackgroundRepeat from, BackgroundRepeat to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x30DF2A0", Offset = "0x30DD8A0", VA = "0x1830DF2A0", Slot = "120")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, BackgroundSize from, BackgroundSize to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x30DFAD0", Offset = "0x30DE0D0", VA = "0x1830DFAD0", Slot = "121")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, List<FilterFunction> from, List<FilterFunction> to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x30DF830", Offset = "0x30DDE30", VA = "0x1830DF830", Slot = "122")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, MaterialDefinition from, MaterialDefinition to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x30DEC50", Offset = "0x30DD250", VA = "0x1830DEC50", Slot = "125")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002ECancelAnimation(StylePropertyId id)
	{
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x30DEB00", Offset = "0x30DD100", VA = "0x1830DEB00", Slot = "126")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002ECancelAllAnimations()
	{
	}

	[Token(Token = "0x60019F4")]
	[Address(RVA = "0x30E0640", Offset = "0x30DEC40", VA = "0x1830E0640", Slot = "123")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EUpdateAnimation(StylePropertyId id)
	{
	}

	[Token(Token = "0x60019F5")]
	[Address(RVA = "0x30DECD0", Offset = "0x30DD2D0", VA = "0x1830DECD0", Slot = "124")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EGetAllAnimations(List<StylePropertyId> outPropertyIds)
	{
	}

	[Token(Token = "0x60019F6")]
	[Address(RVA = "0x30DBBB0", Offset = "0x30DA1B0", VA = "0x1830DBBB0")]
	internal bool TryConvertLengthUnits(StylePropertyId id, ref Length from, ref Length to, int subPropertyIndex = 0)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F7")]
	[Address(RVA = "0x30DBE10", Offset = "0x30DA410", VA = "0x1830DBE10")]
	internal bool TryConvertTransformOriginUnits(ref TransformOrigin from, ref TransformOrigin to)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F8")]
	[Address(RVA = "0x30DBEC0", Offset = "0x30DA4C0", VA = "0x1830DBEC0")]
	internal bool TryConvertTranslateUnits(ref Translate from, ref Translate to)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F9")]
	[Address(RVA = "0x30DBAB0", Offset = "0x30DA0B0", VA = "0x1830DBAB0")]
	internal bool TryConvertBackgroundSizeUnits(ref BackgroundSize from, ref BackgroundSize to)
	{
		return default(bool);
	}

	[Token(Token = "0x60019FA")]
	[Address(RVA = "0x30D5EE0", Offset = "0x30D44E0", VA = "0x1830D5EE0")]
	private float? GetParentSizeForLengthConversion(StylePropertyId id, int subPropertyIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6001A11")]
	[Address(RVA = "0x30D7420", Offset = "0x30D5A20", VA = "0x1830D7420")]
	internal void MarkRenderHintsClean()
	{
	}

	[Token(Token = "0x6001A19")]
	[Address(RVA = "0x30D43D0", Offset = "0x30D29D0", VA = "0x1830D43D0")]
	internal void ClearManualLayout()
	{
	}

	[Token(Token = "0x6001A2B")]
	[Address(RVA = "0x30E0950", Offset = "0x30DEF50", VA = "0x1830E0950")]
	internal void UpdateBoundingBox()
	{
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x30E21A0", Offset = "0x30E07A0", VA = "0x1830E21A0")]
	internal void UpdateWorldBoundingBox()
	{
	}

	[Token(Token = "0x6001A30")]
	[Address(RVA = "0x30E10E0", Offset = "0x30DF6E0", VA = "0x1830E10E0")]
	private void UpdateBounds3D()
	{
	}

	[Token(Token = "0x6001A3B")]
	[Address(RVA = "0x30D67D0", Offset = "0x30D4DD0", VA = "0x1830D67D0")]
	internal unsafe ref Matrix4x4 GetWorldTransformInverse(out bool isSingular)
	{
		return ref *(Matrix4x4*)null;
	}

	[Token(Token = "0x6001A40")]
	[Address(RVA = "0x30E2330", Offset = "0x30E0930", VA = "0x1830E2330")]
	internal void UpdateWorldTransform()
	{
	}

	[Token(Token = "0x6001A41")]
	[Address(RVA = "0x30E2230", Offset = "0x30E0830", VA = "0x1830E2230")]
	internal void UpdateWorldTransformInverse()
	{
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x30D5490", Offset = "0x30D3A90", VA = "0x1830D5490")]
	internal void EnsureWorldTransformAndClipUpToDate()
	{
	}

	[Token(Token = "0x6001A44")]
	[Address(RVA = "0x30D4BD0", Offset = "0x30D31D0", VA = "0x1830D4BD0")]
	internal static Rect ComputeAAAlignedBound(Rect position, Matrix4x4 mat)
	{
		return default(Rect);
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x30D9910", Offset = "0x30D7F10", VA = "0x1830D9910")]
	public void SetActivePseudoState(bool value)
	{
	}

	[Token(Token = "0x6001A4C")]
	[Address(RVA = "0x30D9A70", Offset = "0x30D8070", VA = "0x1830D9A70")]
	public void SetCheckedPseudoState(bool value)
	{
	}

	[Token(Token = "0x6001A4F")]
	[Address(RVA = "0x30E1F70", Offset = "0x30E0570", VA = "0x1830E1F70")]
	internal void UpdateHoverPseudoState()
	{
	}

	[Token(Token = "0x6001A50")]
	[Address(RVA = "0x30D7300", Offset = "0x30D5900", VA = "0x1830D7300")]
	private static bool IsPartOfCapturedChain(VisualElement self, in IEventHandler capturingElement)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A51")]
	[Address(RVA = "0x30E1EF0", Offset = "0x30E04F0", VA = "0x1830E1EF0")]
	internal void UpdateHoverPseudoStateAfterCaptureChange(int pointerId)
	{
	}

	[Token(Token = "0x6001A52")]
	[Address(RVA = "0x30E20E0", Offset = "0x30E06E0", VA = "0x1830E20E0")]
	internal void UpdatePointerCaptureFlag()
	{
	}

	[Token(Token = "0x6001A5F")]
	[Address(RVA = "0x30D3FE0", Offset = "0x30D25E0", VA = "0x1830D3FE0")]
	private void ChangeIMGUIContainerCount(int delta)
	{
	}

	[Token(Token = "0x6001A60")]
	[Address(RVA = "0x30E3D50", Offset = "0x30E2350", VA = "0x1830E3D50")]
	public VisualElement()
	{
	}

	[Token(Token = "0x6001A61")]
	[Address(RVA = "0x30D5540", Offset = "0x30D3B40", VA = "0x1830D5540", Slot = "1")]
	~VisualElement()
	{
	}

	[Token(Token = "0x6001A62")]
	[Address(RVA = "0x30DAD70", Offset = "0x30D9370", VA = "0x1830DAD70")]
	internal void SetTooltip(TooltipEvent e)
	{
	}

	[Token(Token = "0x6001A63")]
	[Address(RVA = "0x30D5950", Offset = "0x30D3F50", VA = "0x1830D5950", Slot = "19")]
	public sealed override void Focus()
	{
	}

	[Token(Token = "0x6001A64")]
	[Address(RVA = "0x30DB2D0", Offset = "0x30D98D0", VA = "0x1830DB2D0")]
	internal long TimeSinceStartupMs()
	{
		return default(long);
	}

	[Token(Token = "0x6001A65")]
	[Address(RVA = "0x30DA240", Offset = "0x30D8840", VA = "0x1830DA240")]
	internal void SetPanel(BaseVisualElementPanel p)
	{
	}

	[Token(Token = "0x6001A66")]
	[Address(RVA = "0x30E2650", Offset = "0x30E0C50", VA = "0x1830E2650")]
	private void WillChangePanel(BaseVisualElementPanel destinationPanel)
	{
	}

	[Token(Token = "0x6001A67")]
	[Address(RVA = "0x30D6850", Offset = "0x30D4E50", VA = "0x1830D6850")]
	private void HasChangedPanel(BaseVisualElementPanel prevPanel)
	{
	}

	[Token(Token = "0x6001A68")]
	[Address(RVA = "0x30D9860", Offset = "0x30D7E60", VA = "0x1830D9860", Slot = "5")]
	public sealed override void SendEvent(EventBase e)
	{
	}

	[Token(Token = "0x6001A69")]
	[Address(RVA = "0x30D9880", Offset = "0x30D7E80", VA = "0x1830D9880", Slot = "6")]
	internal sealed override void SendEvent(EventBase e, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6001A6A")]
	[Address(RVA = "0x30D6E70", Offset = "0x30D5470", VA = "0x1830D6E70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void IncrementVersion(VersionChangeType changeType)
	{
	}

	[Token(Token = "0x6001A6B")]
	[Address(RVA = "0x30D72D0", Offset = "0x30D58D0", VA = "0x1830D72D0")]
	internal void InvokeHierarchyChanged(HierarchyChangeType changeType, [Optional] IReadOnlyList<VisualElement> additionalContext)
	{
	}

	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x30D9D30", Offset = "0x30D8330", VA = "0x1830D9D30")]
	private bool SetEnabledFromHierarchyPrivate(bool state)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A71")]
	[Address(RVA = "0x30DA150", Offset = "0x30D8750", VA = "0x1830DA150")]
	public void SetEnabled(bool value)
	{
	}

	[Token(Token = "0x6001A72")]
	[Address(RVA = "0x30D8140", Offset = "0x30D6740", VA = "0x1830D8140")]
	private void PropagateEnabledToChildren(bool value)
	{
	}

	[Token(Token = "0x6001A79")]
	[Address(RVA = "0x30D73F0", Offset = "0x30D59F0", VA = "0x1830D73F0")]
	public void MarkDirtyRepaint()
	{
	}

	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x30D71A0", Offset = "0x30D57A0", VA = "0x1830D71A0")]
	internal void InvokeGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x30D5D20", Offset = "0x30D4320", VA = "0x1830D5D20")]
	internal void GetFullHierarchicalViewDataKey(StringBuilder key)
	{
	}

	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x30D5C40", Offset = "0x30D4240", VA = "0x1830D5C40")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string GetFullHierarchicalViewDataKey()
	{
		return null;
	}

	[Token(Token = "0x6001A7F")]
	internal T GetOrCreateViewData<T>(object existing, string key) where T : class, new()
	{
		return null;
	}

	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x30D7B20", Offset = "0x30D6120", VA = "0x1830D7B20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void OverwriteFromViewData(object obj, string key)
	{
	}

	[Token(Token = "0x6001A81")]
	[Address(RVA = "0x30D97D0", Offset = "0x30D7DD0", VA = "0x1830D97D0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void SaveViewData()
	{
	}

	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "135")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal virtual void OnViewDataReady()
	{
	}

	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x30D4F60", Offset = "0x30D3560", VA = "0x1830D4F60", Slot = "136")]
	public virtual bool ContainsPoint(Vector2 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A86")]
	[Address(RVA = "0x30D2810", Offset = "0x30D0E10", VA = "0x1830D2810")]
	private void AssignMeasureFunction()
	{
	}

	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x30D8EC0", Offset = "0x30D74C0", VA = "0x1830D8EC0")]
	private void RemoveMeasureFunction()
	{
	}

	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x30D5290", Offset = "0x30D3890", VA = "0x1830D5290", Slot = "137")]
	protected internal virtual Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x30D7440", Offset = "0x30D5A40", VA = "0x1830D7440")]
	internal static void Measure(VisualElement ve, ref LayoutNode node, float width, LayoutMeasureMode widthMode, float height, LayoutMeasureMode heightMode, out LayoutSize result)
	{
	}

	[Token(Token = "0x6001A8A")]
	[Address(RVA = "0x30D54E0", Offset = "0x30D3AE0", VA = "0x1830D54E0")]
	private void FinalizeLayout()
	{
	}

	[Token(Token = "0x6001A8B")]
	[Address(RVA = "0x30DA160", Offset = "0x30D8760", VA = "0x1830DA160")]
	internal void SetInlineRule(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x6001A8C")]
	[Address(RVA = "0x30D9AF0", Offset = "0x30D80F0", VA = "0x1830D9AF0")]
	internal void SetComputedStyle(ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x6001A8D")]
	[Address(RVA = "0x30DB350", Offset = "0x30D9950", VA = "0x1830DB350", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001A8E")]
	[Address(RVA = "0xAD2BF0", Offset = "0xAD11F0", VA = "0x180AD2BF0")]
	internal List<string> GetClassesForIteration()
	{
		return null;
	}

	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x30D2430", Offset = "0x30D0A30", VA = "0x1830D2430")]
	public void AddToClassList(string className)
	{
	}

	[Token(Token = "0x6001A90")]
	[Address(RVA = "0x30D8D20", Offset = "0x30D7320", VA = "0x1830D8D20")]
	public void RemoveFromClassList(string className)
	{
	}

	[Token(Token = "0x6001A91")]
	[Address(RVA = "0x30D5460", Offset = "0x30D3A60", VA = "0x1830D5460")]
	public void EnableInClassList(string className, bool enable)
	{
	}

	[Token(Token = "0x6001A92")]
	[Address(RVA = "0x30D4300", Offset = "0x30D2900", VA = "0x1830D4300")]
	public bool ClassListContains(string cls)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A93")]
	[Address(RVA = "0x30D6650", Offset = "0x30D4C50", VA = "0x1830D6650")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
	internal object GetProperty(PropertyName key)
	{
		return null;
	}

	[Token(Token = "0x6001A94")]
	[Address(RVA = "0x30DAD00", Offset = "0x30D9300", VA = "0x1830DAD00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
	internal void SetProperty(PropertyName key, object value)
	{
	}

	[Token(Token = "0x6001A95")]
	[Address(RVA = "0x30D6D70", Offset = "0x30D5370", VA = "0x1830D6D70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
	internal bool HasProperty(PropertyName key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A96")]
	[Address(RVA = "0x30D4AD0", Offset = "0x30D30D0", VA = "0x1830D4AD0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal bool ClearProperty(PropertyName key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A97")]
	[Address(RVA = "0x30D4030", Offset = "0x30D2630", VA = "0x1830D4030")]
	private static void CheckUserKeyArgument(PropertyName key)
	{
	}

	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x30DAC40", Offset = "0x30D9240", VA = "0x1830DAC40")]
	private void SetPropertyInternal(PropertyName key, object value)
	{
	}

	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x30E19A0", Offset = "0x30DFFA0", VA = "0x1830E19A0")]
	internal void UpdateCursorStyle(long eventType)
	{
	}

	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x30D5AA0", Offset = "0x30D40A0", VA = "0x1830D5AA0")]
	private VisualElementAnimationSystem GetAnimationSystem()
	{
		return null;
	}

	[Token(Token = "0x6001A9B")]
	[Address(RVA = "0x30D8B80", Offset = "0x30D7180", VA = "0x1830D8B80")]
	internal void RegisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6001A9C")]
	[Address(RVA = "0x30E0840", Offset = "0x30DEE40", VA = "0x1830E0840")]
	internal void UnregisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6001A9D")]
	[Address(RVA = "0x30E08C0", Offset = "0x30DEEC0", VA = "0x1830E08C0")]
	private void UnregisterRunningAnimations()
	{
	}

	[Token(Token = "0x6001A9E")]
	[Address(RVA = "0x30D8CB0", Offset = "0x30D72B0", VA = "0x1830D8CB0")]
	private void RegisterRunningAnimations()
	{
	}

	[Token(Token = "0x6001A9F")]
	private static ValueAnimation<T> StartAnimation<T>(ValueAnimation<T> anim, Func<VisualElement, T> fromValueGetter, T to, int durationMs, Action<VisualElement, T> onValueChanged)
	{
		return null;
	}

	[Token(Token = "0x6001AA0")]
	[Address(RVA = "0x30D2850", Offset = "0x30D0E50", VA = "0x1830D2850")]
	private static void AssignStyleValues(VisualElement ve, StyleValues src)
	{
	}

	[Token(Token = "0x6001AA1")]
	[Address(RVA = "0x30D8200", Offset = "0x30D6800", VA = "0x1830D8200")]
	private StyleValues ReadCurrentValues(VisualElement ve, StyleValues targetValuesToRead)
	{
		return default(StyleValues);
	}

	[Token(Token = "0x6001AA2")]
	[Address(RVA = "0x30DC050", Offset = "0x30DA650", VA = "0x1830DC050", Slot = "131")]
	private ValueAnimation<StyleValues> UnityEngine_002EUIElements_002EExperimental_002EITransitionAnimations_002EStart(StyleValues to, int durationMs)
	{
		return null;
	}

	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x30DB190", Offset = "0x30D9790", VA = "0x1830DB190")]
	private ValueAnimation<StyleValues> Start(Func<VisualElement, StyleValues> fromValueGetter, StyleValues to, int durationMs)
	{
		return null;
	}

	[Token(Token = "0x6001AA9")]
	[Address(RVA = "0x30DBF70", Offset = "0x30DA570", VA = "0x1830DBF70")]
	public bool TryGetBinding(BindingId bindingId, out Binding binding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AAA")]
	[Address(RVA = "0x30D7FF0", Offset = "0x30D65F0", VA = "0x1830D7FF0")]
	private void ProcessBindingRequests()
	{
	}

	[Token(Token = "0x6001AAB")]
	[Address(RVA = "0x30D5140", Offset = "0x30D3740", VA = "0x1830D5140")]
	private void CreateBindingRequests()
	{
	}

	[Token(Token = "0x6001AAC")]
	[Address(RVA = "0x30DB5A0", Offset = "0x30D9BA0", VA = "0x1830DB5A0")]
	private void TrackSource(object previous, object current)
	{
	}

	[Token(Token = "0x6001AAD")]
	[Address(RVA = "0x30D51D0", Offset = "0x30D37D0", VA = "0x1830D51D0")]
	private void DetachDataSource()
	{
	}

	[Token(Token = "0x6001AAE")]
	[Address(RVA = "0x30D3550", Offset = "0x30D1B50", VA = "0x1830D3550")]
	private void AttachDataSource()
	{
	}

	[Token(Token = "0x6001AAF")]
	[Address(RVA = "0x30D5200", Offset = "0x30D3800", VA = "0x1830D5200")]
	private void DirtyNextParentWithEventInterests()
	{
	}

	[Token(Token = "0x6001AB0")]
	[Address(RVA = "0x30D9990", Offset = "0x30D7F90", VA = "0x1830D9990")]
	internal void SetAsNextParentWithEventInterests()
	{
	}

	[Token(Token = "0x6001AB1")]
	[Address(RVA = "0x30D5B50", Offset = "0x30D4150", VA = "0x1830D5B50")]
	internal bool GetCachedNextParentWithEventInterests(out VisualElement nextParent)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AB3")]
	[Address(RVA = "0x30D80B0", Offset = "0x30D66B0", VA = "0x1830D80B0")]
	private void PropagateCachedNextParentWithEventInterests(VisualElement nextParent, VisualElement stopParent)
	{
	}

	[Token(Token = "0x6001AB4")]
	[Address(RVA = "0x30D21B0", Offset = "0x30D07B0", VA = "0x1830D21B0")]
	internal void AddEventCallbackCategories(int eventCategories, CallbackOptions callbackOptions)
	{
	}

	[Token(Token = "0x6001AB8")]
	[Address(RVA = "0x30E1D90", Offset = "0x30E0390", VA = "0x1830E1D90")]
	private void UpdateEventInterestSelfCategories()
	{
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x30E1CB0", Offset = "0x30E02B0", VA = "0x1830E1CB0")]
	private void UpdateEventInterestParentCategories()
	{
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x30D6D40", Offset = "0x30D5340", VA = "0x1830D6D40")]
	internal bool HasParentEventInterests(EventCategory eventCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABB")]
	[Address(RVA = "0x30D6D20", Offset = "0x30D5320", VA = "0x1830D6D20")]
	internal bool HasParentEventInterests(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABC")]
	[Address(RVA = "0x30D6E00", Offset = "0x30D5400", VA = "0x1830D6E00")]
	internal bool HasSelfEventInterests(EventCategory eventCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABD")]
	[Address(RVA = "0x30D6E20", Offset = "0x30D5420", VA = "0x1830D6E20")]
	internal bool HasSelfEventInterests(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABE")]
	[Address(RVA = "0x30D6E40", Offset = "0x30D5440", VA = "0x1830D6E40")]
	internal bool HasTrickleDownEventInterests(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABF")]
	[Address(RVA = "0x30D6820", Offset = "0x30D4E20", VA = "0x1830D6820")]
	internal bool HasBubbleUpEventInterests(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x30D6E30", Offset = "0x30D5430", VA = "0x1830D6E30")]
	internal bool HasTrickleDownEventCallbacks(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC1")]
	[Address(RVA = "0x30D6810", Offset = "0x30D4E10", VA = "0x1830D6810")]
	internal bool HasBubbleUpEventCallbacks(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC2")]
	[Address(RVA = "0x30D6E60", Offset = "0x30D5460", VA = "0x1830D6E60")]
	internal bool HasTrickleDownHandleEvent(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x30D6840", Offset = "0x30D4E40", VA = "0x1830D6840")]
	internal bool HasBubbleUpHandleEvent(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x30DB150", Offset = "0x30D9750", VA = "0x1830DB150")]
	internal bool ShouldClip()
	{
		return default(bool);
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x30D2740", Offset = "0x30D0D40", VA = "0x1830D2740")]
	public void Add(VisualElement child)
	{
	}

	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x30D2640", Offset = "0x30D0C40", VA = "0x1830D2640")]
	internal void Add(VisualElement child, bool ignoreContentContainer)
	{
	}

	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x30D7010", Offset = "0x30D5610", VA = "0x1830D7010")]
	public void Insert(int index, VisualElement element)
	{
	}

	[Token(Token = "0x6001AD7")]
	[Address(RVA = "0x30D70C0", Offset = "0x30D56C0", VA = "0x1830D70C0")]
	internal void Insert(int index, VisualElement element, bool ignoreContentContainer)
	{
	}

	[Token(Token = "0x6001AD8")]
	[Address(RVA = "0x30D8EF0", Offset = "0x30D74F0", VA = "0x1830D8EF0")]
	public void Remove(VisualElement element)
	{
	}

	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x30D4B60", Offset = "0x30D3160", VA = "0x1830D4B60")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001ADA")]
	[Address(RVA = "0x30D5450", Offset = "0x30D3A50", VA = "0x1830D5450")]
	public VisualElement ElementAt(int index)
	{
		return null;
	}

	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x30D41A0", Offset = "0x30D27A0", VA = "0x1830D41A0")]
	internal int ChildCount(bool ignoreContentContainer)
	{
		return default(int);
	}

	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x30D6EA0", Offset = "0x30D54A0", VA = "0x1830D6EA0")]
	public int IndexOf(VisualElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001ADF")]
	[Address(RVA = "0x30D6F40", Offset = "0x30D5540", VA = "0x1830D6F40")]
	internal int IndexOf(VisualElement element, bool ignoreContentContainer)
	{
		return default(int);
	}

	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x30D52B0", Offset = "0x30D38B0", VA = "0x1830D52B0")]
	internal VisualElement ElementAtTreePath(List<int> childIndexes)
	{
		return null;
	}

	[Token(Token = "0x6001AE1")]
	[Address(RVA = "0x30D5830", Offset = "0x30D3E30", VA = "0x1830D5830")]
	internal bool FindElementInTree(VisualElement element, List<int> outChildIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x30D4240", Offset = "0x30D2840", VA = "0x1830D4240")]
	public IEnumerable<VisualElement> Children()
	{
		return null;
	}

	[Token(Token = "0x6001AE3")]
	[Address(RVA = "0x30D3570", Offset = "0x30D1B70", VA = "0x1830D3570")]
	public void BringToFront()
	{
	}

	[Token(Token = "0x6001AE4")]
	[Address(RVA = "0x30D98A0", Offset = "0x30D7EA0", VA = "0x1830D98A0")]
	public void SendToBack()
	{
	}

	[Token(Token = "0x6001AE5")]
	[Address(RVA = "0x30D7E90", Offset = "0x30D6490", VA = "0x1830D7E90")]
	public void PlaceBehind(VisualElement sibling)
	{
	}

	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "139")]
	internal virtual void OnChildAdded(VisualElement child)
	{
	}

	[Token(Token = "0x6001AE7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "140")]
	internal virtual void OnChildRemoved(VisualElement child)
	{
	}

	[Token(Token = "0x6001AE8")]
	[Address(RVA = "0x30D8E50", Offset = "0x30D7450", VA = "0x1830D8E50")]
	public void RemoveFromHierarchy()
	{
	}

	[Token(Token = "0x6001AE9")]
	public T GetFirstOfType<T>() where T : class
	{
		return null;
	}

	[Token(Token = "0x6001AEA")]
	public T GetFirstAncestorOfType<T>() where T : class
	{
		return null;
	}

	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x30D5BB0", Offset = "0x30D41B0", VA = "0x1830D5BB0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
	internal VisualElement GetFirstAncestorWhere(Predicate<VisualElement> predicate)
	{
		return null;
	}

	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x30D50C0", Offset = "0x30D36C0", VA = "0x1830D50C0")]
	public bool Contains(VisualElement child)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x30D59E0", Offset = "0x30D3FE0", VA = "0x1830D59E0")]
	private void GatherAllChildren(List<VisualElement> elements)
	{
	}

	[Token(Token = "0x6001AEE")]
	[Address(RVA = "0x30D5670", Offset = "0x30D3C70", VA = "0x1830D5670")]
	public VisualElement FindCommonAncestor(VisualElement other)
	{
		return null;
	}

	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x30D66F0", Offset = "0x30D4CF0", VA = "0x1830D66F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualElement GetRootVisualContainer(bool stopAtNearestRoot = false)
	{
		return null;
	}

	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x30D5DB0", Offset = "0x30D43B0", VA = "0x1830D5DB0")]
	internal VisualElement GetNextElementDepthFirst()
	{
		return null;
	}

	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x30D6530", Offset = "0x30D4B30", VA = "0x1830D6530")]
	internal VisualElement GetPreviousElementDepthFirst()
	{
		return null;
	}

	[Token(Token = "0x6001AF2")]
	[Address(RVA = "0x30D9730", Offset = "0x30D7D30", VA = "0x1830D9730")]
	internal VisualElement RetargetElement(VisualElement retargetAgainst)
	{
		return null;
	}

	[Token(Token = "0x6001AF4")]
	[Address(RVA = "0x30D61A0", Offset = "0x30D47A0", VA = "0x1830D61A0")]
	internal void GetPivotedMatrixWithLayout(out Matrix4x4 result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x30D7680", Offset = "0x30D5C80", VA = "0x1830D7680")]
	internal static float Min(float a, float b, float c, float d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x30D7430", Offset = "0x30D5A30", VA = "0x1830D7430")]
	internal static float Max(float a, float b, float c, float d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x30DB630", Offset = "0x30D9C30", VA = "0x1830DB630")]
	internal void TransformAlignedBoundsToParentSpace(ref Bounds bounds)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x30DB800", Offset = "0x30D9E00", VA = "0x1830DB800")]
	private void TransformAlignedRectToParentSpace(ref Rect rect)
	{
	}

	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x30D3B40", Offset = "0x30D2140", VA = "0x1830D3B40")]
	internal static Rect CalculateConservativeRect(ref Matrix4x4 matrix, Rect rect)
	{
		return default(Rect);
	}

	[Token(Token = "0x6001AFE")]
	[Address(RVA = "0x30D35E0", Offset = "0x30D1BE0", VA = "0x1830D35E0")]
	internal static Bounds CalculateConservativeBounds(ref Matrix4x4 matrix, Bounds bounds)
	{
		return default(Bounds);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x30DB910", Offset = "0x30D9F10", VA = "0x1830DB910")]
	internal static void TransformAlignedRect(ref Matrix4x4 matrix, ref Rect rect)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B00")]
	[Address(RVA = "0x30DB750", Offset = "0x30D9D50", VA = "0x1830DB750")]
	internal static void TransformAlignedBounds(ref Matrix4x4 matrix, ref Bounds bounds)
	{
	}

	[Token(Token = "0x6001B01")]
	[Address(RVA = "0x30D7A40", Offset = "0x30D6040", VA = "0x1830D7A40")]
	internal static void OrderMinMaxRect(ref Rect rect)
	{
	}

	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x30D7A10", Offset = "0x30D6010", VA = "0x1830D7A10")]
	internal static void OrderMinMaxBounds(ref Bounds bounds)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B03")]
	[Address(RVA = "0x30D7930", Offset = "0x30D5F30", VA = "0x1830D7930")]
	internal static Vector2 MultiplyMatrix44Point2(ref Matrix4x4 lhs, Vector2 point)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B04")]
	[Address(RVA = "0x30D78C0", Offset = "0x30D5EC0", VA = "0x1830D78C0")]
	internal static Vector3 MultiplyMatrix44Point2ToPoint3(ref Matrix4x4 lhs, Vector2 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B05")]
	[Address(RVA = "0x30D7970", Offset = "0x30D5F70", VA = "0x1830D7970")]
	internal static Vector2 MultiplyMatrix44Point3ToPoint2(ref Matrix4x4 lhs, Vector3 point)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B06")]
	[Address(RVA = "0x30D79D0", Offset = "0x30D5FD0", VA = "0x1830D79D0")]
	internal static Vector2 MultiplyVector2(ref Matrix4x4 lhs, Vector2 vector)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6001B07")]
	[Address(RVA = "0x30D7690", Offset = "0x30D5C90", VA = "0x1830D7690")]
	internal static void MultiplyMatrix34(ref Matrix4x4 lhs, ref Matrix4x4 rhs, out Matrix4x4 res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B08")]
	[Address(RVA = "0x30DB990", Offset = "0x30D9F90", VA = "0x1830DB990")]
	private static void TranslateMatrix34(ref Matrix4x4 lhs, Vector3 rhs, out Matrix4x4 res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B09")]
	[Address(RVA = "0x2B50150", Offset = "0x2B4E750", VA = "0x182B50150")]
	private static void TranslateMatrix34InPlace(ref Matrix4x4 lhs, Vector3 rhs)
	{
	}

	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x30E06C0", Offset = "0x30DECC0", VA = "0x1830E06C0", Slot = "133")]
	private IVisualElementScheduledItem UnityEngine_002EUIElements_002EIVisualElementScheduler_002EExecute(Action<TimerState> timerUpdateEvent)
	{
		return null;
	}

	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x30E0780", Offset = "0x30DED80", VA = "0x1830E0780", Slot = "134")]
	private IVisualElementScheduledItem UnityEngine_002EUIElements_002EIVisualElementScheduler_002EExecute(Action updateEvent)
	{
		return null;
	}

	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x30D21D0", Offset = "0x30D07D0", VA = "0x1830D21D0")]
	internal void AddStyleSheetPath(string sheetPath)
	{
	}

	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x30D8F80", Offset = "0x30D7580", VA = "0x1830D8F80")]
	internal StyleFloat ResolveLengthValue(Length length, bool isRow)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x30D9560", Offset = "0x30D7B60", VA = "0x1830D9560")]
	internal Vector3 ResolveTranslate()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x30D9310", Offset = "0x30D7910", VA = "0x1830D9310")]
	internal Vector3 ResolveTransformOrigin()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001B15")]
	[Address(RVA = "0x30D90E0", Offset = "0x30D76E0", VA = "0x1830D90E0")]
	private Quaternion ResolveRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6001B16")]
	[Address(RVA = "0x30D9230", Offset = "0x30D7830", VA = "0x1830D9230")]
	private Vector3 ResolveScale()
	{
		return default(Vector3);
	}
}
