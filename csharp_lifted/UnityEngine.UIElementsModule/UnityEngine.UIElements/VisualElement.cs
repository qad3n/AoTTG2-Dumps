// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElement
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6AE9140", Offset = "0x6AE8140", VA = "0x6AE9140")]
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
			[Address(RVA = "0x6AE9180", Offset = "0x6AE8180", VA = "0x6AE9180")]
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
			[Address(RVA = "0x6AE9190", Offset = "0x6AE8190", VA = "0x6AE9190")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B1F")]
		[Address(RVA = "0x6AE91A0", Offset = "0x6AE81A0", VA = "0x6AE91A0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6001B20")]
		[Address(RVA = "0x6AE9690", Offset = "0x6AE8690", VA = "0x6AE9690")]
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
			[Address(RVA = "0x6AE9DA0", Offset = "0x6AE8DA0", VA = "0x6AE9DA0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A2")]
		internal List<VisualElement> children
		{
			[Token(Token = "0x6001B22")]
			[Address(RVA = "0x6AE9DC0", Offset = "0x6AE8DC0", VA = "0x6AE9DC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007A3")]
		public int childCount
		{
			[Token(Token = "0x6001B2D")]
			[Address(RVA = "0x6AE9E90", Offset = "0x6AE8E90", VA = "0x6AE9E90")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170007A4")]
		public VisualElement this[int key]
		{
			[Token(Token = "0x6001B2E")]
			[Address(RVA = "0x6AEB3D0", Offset = "0x6AEA3D0", VA = "0x6AEB3D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B23")]
		[Address(RVA = "0x6AE9DE0", Offset = "0x6AE8DE0", VA = "0x6AE9DE0")]
		internal Hierarchy(VisualElement element)
		{
		}

		[Token(Token = "0x6001B24")]
		[Address(RVA = "0x6AE9DF0", Offset = "0x6AE8DF0", VA = "0x6AE9DF0")]
		public void Add(VisualElement child)
		{
		}

		[Token(Token = "0x6001B25")]
		[Address(RVA = "0x6AE9ED0", Offset = "0x6AE8ED0", VA = "0x6AE9ED0")]
		public void Insert(int index, VisualElement child)
		{
		}

		[Token(Token = "0x6001B26")]
		[Address(RVA = "0x6AEA5A0", Offset = "0x6AE95A0", VA = "0x6AEA5A0")]
		public void Remove(VisualElement child)
		{
		}

		[Token(Token = "0x6001B27")]
		[Address(RVA = "0x6AEA690", Offset = "0x6AE9690", VA = "0x6AEA690")]
		public void RemoveAt(int index)
		{
		}

		[Token(Token = "0x6001B28")]
		[Address(RVA = "0x6AEAB20", Offset = "0x6AE9B20", VA = "0x6AEAB20")]
		public void Clear()
		{
		}

		[Token(Token = "0x6001B29")]
		[Address(RVA = "0x6AEB070", Offset = "0x6AEA070", VA = "0x6AEB070")]
		internal void BringToFront(VisualElement child)
		{
		}

		[Token(Token = "0x6001B2A")]
		[Address(RVA = "0x6AEB230", Offset = "0x6AEA230", VA = "0x6AEB230")]
		internal void SendToBack(VisualElement child)
		{
		}

		[Token(Token = "0x6001B2B")]
		[Address(RVA = "0x6AEB2E0", Offset = "0x6AEA2E0", VA = "0x6AEB2E0")]
		internal void PlaceBehind(VisualElement child, VisualElement over)
		{
		}

		[Token(Token = "0x6001B2C")]
		[Address(RVA = "0x6AEB150", Offset = "0x6AEA150", VA = "0x6AEB150")]
		private void MoveChildElement(VisualElement child, int currentIndex, int nextIndex)
		{
		}

		[Token(Token = "0x6001B2F")]
		[Address(RVA = "0x6AEB430", Offset = "0x6AEA430", VA = "0x6AEB430")]
		public int IndexOf(VisualElement element)
		{
			return default(int);
		}

		[Token(Token = "0x6001B30")]
		[Address(RVA = "0x6AEB490", Offset = "0x6AEA490", VA = "0x6AEB490")]
		public VisualElement ElementAt(int index)
		{
			return null;
		}

		[Token(Token = "0x6001B31")]
		[Address(RVA = "0x6AEB4F0", Offset = "0x6AEA4F0", VA = "0x6AEB4F0")]
		public IEnumerable<VisualElement> Children()
		{
			return null;
		}

		[Token(Token = "0x6001B32")]
		[Address(RVA = "0x6AEA4A0", Offset = "0x6AE94A0", VA = "0x6AEA4A0")]
		private void SetParent(VisualElement value)
		{
		}

		[Token(Token = "0x6001B33")]
		[Address(RVA = "0x6AEA260", Offset = "0x6AE9260", VA = "0x6AEA260")]
		private void PutChildAtIndex(VisualElement child, int index)
		{
		}

		[Token(Token = "0x6001B34")]
		[Address(RVA = "0x6AEA9A0", Offset = "0x6AE99A0", VA = "0x6AEA9A0")]
		private void RemoveChildAtIndex(int index)
		{
		}

		[Token(Token = "0x6001B35")]
		[Address(RVA = "0x6AEAA10", Offset = "0x6AE9A10", VA = "0x6AEAA10")]
		private void ReleaseChildList()
		{
		}

		[Token(Token = "0x6001B36")]
		[Address(RVA = "0x6AEB510", Offset = "0x6AEA510", VA = "0x6AEB510")]
		public bool Equals(Hierarchy other)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B37")]
		[Address(RVA = "0x6AEB530", Offset = "0x6AEA530", VA = "0x6AEB530", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B38")]
		[Address(RVA = "0x6AEB590", Offset = "0x6AEA590", VA = "0x6AEB590", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6001B39")]
		[Address(RVA = "0x6AEB520", Offset = "0x6AEA520", VA = "0x6AEB520")]
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
			[Address(RVA = "0x6AEB5B0", Offset = "0x6AEA5B0", VA = "0x6AEB5B0", Slot = "14")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6001B3B")]
			[Address(RVA = "0x6AEB5C0", Offset = "0x6AEA5C0", VA = "0x6AEB5C0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170007A6")]
		public bool isScheduled
		{
			[Token(Token = "0x6001B3C")]
			[Address(RVA = "0x6AEB5D0", Offset = "0x6AEA5D0", VA = "0x6AEB5D0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170007A7")]
		public bool isActive
		{
			[Token(Token = "0x6001B3D")]
			[Address(RVA = "0x6AEB5E0", Offset = "0x6AEA5E0", VA = "0x6AEB5E0", Slot = "7")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6001B3E")]
			[Address(RVA = "0x6AEB5F0", Offset = "0x6AEA5F0", VA = "0x6AEB5F0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x170007A8")]
		public bool isDetaching
		{
			[Token(Token = "0x6001B3F")]
			[Address(RVA = "0x6AEB600", Offset = "0x6AEA600", VA = "0x6AEB600")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6001B40")]
			[Address(RVA = "0x6AEB610", Offset = "0x6AEA610", VA = "0x6AEB610")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6001B41")]
		[Address(RVA = "0x6AEB620", Offset = "0x6AEA620", VA = "0x6AEB620")]
		protected BaseVisualElementScheduledItem(VisualElement handler)
		{
		}

		[Token(Token = "0x6001B42")]
		[Address(RVA = "0x6AEB770", Offset = "0x6AEA770", VA = "0x6AEB770")]
		private void SetActive(bool action)
		{
		}

		[Token(Token = "0x6001B43")]
		[Address(RVA = "0x6AEB8F0", Offset = "0x6AEA8F0", VA = "0x6AEB8F0")]
		private void SendActivation()
		{
		}

		[Token(Token = "0x6001B44")]
		[Address(RVA = "0x6AEB920", Offset = "0x6AEA920", VA = "0x6AEB920")]
		private void SendDeactivation()
		{
		}

		[Token(Token = "0x6001B45")]
		[Address(RVA = "0x6AEBA70", Offset = "0x6AEAA70", VA = "0x6AEBA70")]
		private void OnElementAttachToPanelCallback(AttachToPanelEvent evt)
		{
		}

		[Token(Token = "0x6001B46")]
		[Address(RVA = "0x6AEBB10", Offset = "0x6AEAB10", VA = "0x6AEBB10")]
		private void OnElementDetachFromPanelCallback(DetachFromPanelEvent evt)
		{
		}

		[Token(Token = "0x6001B47")]
		[Address(RVA = "0x6AEBBD0", Offset = "0x6AEABD0", VA = "0x6AEBBD0", Slot = "11")]
		public IVisualElementScheduledItem StartingIn(long delayMs)
		{
			return null;
		}

		[Token(Token = "0x6001B48")]
		[Address(RVA = "0x6AEBBE0", Offset = "0x6AEABE0", VA = "0x6AEBBE0", Slot = "13")]
		public IVisualElementScheduledItem Until(Func<bool> stopCondition)
		{
			return null;
		}

		[Token(Token = "0x6001B49")]
		[Address(RVA = "0x6AEBC50", Offset = "0x6AEAC50", VA = "0x6AEBC50", Slot = "12")]
		public IVisualElementScheduledItem Every(long intervalMs)
		{
			return null;
		}

		[Token(Token = "0x6001B4A")]
		[Address(RVA = "0x6AEBCF0", Offset = "0x6AEACF0", VA = "0x6AEBCF0", Slot = "5")]
		internal override void OnItemUnscheduled()
		{
		}

		[Token(Token = "0x6001B4B")]
		[Address(RVA = "0x6AEBD30", Offset = "0x6AEAD30", VA = "0x6AEBD30", Slot = "8")]
		public void Resume()
		{
		}

		[Token(Token = "0x6001B4C")]
		[Address(RVA = "0x6AEBD40", Offset = "0x6AEAD40", VA = "0x6AEBD40", Slot = "9")]
		public void Pause()
		{
		}

		[Token(Token = "0x6001B4D")]
		[Address(RVA = "0x6AEBD50", Offset = "0x6AEAD50", VA = "0x6AEBD50", Slot = "10")]
		public void ExecuteLater(long delayMs)
		{
		}

		[Token(Token = "0x6001B4E")]
		[Address(RVA = "0x6AEB9B0", Offset = "0x6AEA9B0", VA = "0x6AEB9B0")]
		public void OnPanelActivate()
		{
		}

		[Token(Token = "0x6001B4F")]
		[Address(RVA = "0x6AEBA30", Offset = "0x6AEAA30", VA = "0x6AEBA30")]
		public void OnPanelDeactivate()
		{
		}

		[Token(Token = "0x6001B50")]
		[Address(RVA = "0x6AEB980", Offset = "0x6AEA980", VA = "0x6AEB980")]
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
		[Address(RVA = "0x6AEBDA0", Offset = "0x6AEADA0", VA = "0x6AEBDA0")]
		public TimerStateScheduledItem(VisualElement handler, Action<TimerState> updateEvent)
		{
		}

		[Token(Token = "0x6001B53")]
		[Address(RVA = "0x6AEBDF0", Offset = "0x6AEADF0", VA = "0x6AEBDF0", Slot = "4")]
		public override void PerformTimerUpdate(TimerState state)
		{
		}
	}

	[Token(Token = "0x2000384")]
	private class SimpleScheduledItem : VisualElementScheduledItem<Action>
	{
		[Token(Token = "0x6001B54")]
		[Address(RVA = "0x6AEBE20", Offset = "0x6AEAE20", VA = "0x6AEBE20")]
		public SimpleScheduledItem(VisualElement handler, Action updateEvent)
		{
		}

		[Token(Token = "0x6001B55")]
		[Address(RVA = "0x6AEBE70", Offset = "0x6AEAE70", VA = "0x6AEBE70", Slot = "4")]
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
		[Address(RVA = "0x6AEBEA0", Offset = "0x6AEAEA0", VA = "0x6AEBEA0")]
		public void SetContext(Dictionary<string, StylePropertyValue> customProperties, float dpiScaling)
		{
		}

		[Token(Token = "0x6001B57")]
		[Address(RVA = "0x6AEBED0", Offset = "0x6AEAED0", VA = "0x6AEBED0", Slot = "4")]
		public bool TryGetValue(CustomStyleProperty<float> property, out float value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B58")]
		[Address(RVA = "0x6AEC050", Offset = "0x6AEB050", VA = "0x6AEC050", Slot = "5")]
		public bool TryGetValue(CustomStyleProperty<int> property, out int value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B59")]
		[Address(RVA = "0x6AEC150", Offset = "0x6AEB150", VA = "0x6AEC150", Slot = "6")]
		public bool TryGetValue(CustomStyleProperty<Color> property, out Color value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5A")]
		[Address(RVA = "0x6AEC2F0", Offset = "0x6AEB2F0", VA = "0x6AEC2F0", Slot = "7")]
		public bool TryGetValue(CustomStyleProperty<Texture2D> property, out Texture2D value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5B")]
		[Address(RVA = "0x6AEC400", Offset = "0x6AEB400", VA = "0x6AEC400", Slot = "8")]
		public bool TryGetValue(CustomStyleProperty<Sprite> property, out Sprite value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5C")]
		[Address(RVA = "0x6AEC510", Offset = "0x6AEB510", VA = "0x6AEC510", Slot = "9")]
		public bool TryGetValue(CustomStyleProperty<VectorImage> property, out VectorImage value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5D")]
		[Address(RVA = "0x6AEC620", Offset = "0x6AEB620", VA = "0x6AEC620", Slot = "10")]
		public bool TryGetValue(CustomStyleProperty<string> property, out string value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5E")]
		[Address(RVA = "0x6AEBFB0", Offset = "0x6AEAFB0", VA = "0x6AEBFB0")]
		private bool TryGetValue(string propertyName, StyleValueType valueType, out StylePropertyValue customProp)
		{
			return default(bool);
		}

		[Token(Token = "0x6001B5F")]
		[Address(RVA = "0x6AEC220", Offset = "0x6AEB220", VA = "0x6AEC220")]
		private static void LogCustomPropertyWarning(string propertyName, StyleValueType valueType, StylePropertyValue customProp)
		{
		}

		[Token(Token = "0x6001B60")]
		[Address(RVA = "0x6AEC6D0", Offset = "0x6AEB6D0", VA = "0x6AEC6D0")]
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
			[Address(RVA = "0x6AEC6E0", Offset = "0x6AEB6E0", VA = "0x6AEC6E0")]
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
			[Address(RVA = "0x6AEC760", Offset = "0x6AEB760", VA = "0x6AEC760")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007AB")]
		public string typeName
		{
			[Token(Token = "0x6001B64")]
			[Address(RVA = "0x6AEC7C0", Offset = "0x6AEB7C0", VA = "0x6AEC7C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001B62")]
		[Address(RVA = "0x6AEC6F0", Offset = "0x6AEB6F0", VA = "0x6AEC6F0")]
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
		[Address(RVA = "0x6ACD220", Offset = "0x6ACC220", VA = "0x6ACD220", Slot = "21")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x170006E5")]
	private Align UnityEngine_002EUIElements_002EIResolvedStyle_002EalignItems
	{
		[Token(Token = "0x6001985")]
		[Address(RVA = "0x6ACD3F0", Offset = "0x6ACC3F0", VA = "0x6ACD3F0", Slot = "22")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x170006E6")]
	private Align UnityEngine_002EUIElements_002EIResolvedStyle_002EalignSelf
	{
		[Token(Token = "0x6001986")]
		[Address(RVA = "0x6ACD520", Offset = "0x6ACC520", VA = "0x6ACD520", Slot = "23")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x170006E7")]
	private Ratio UnityEngine_002EUIElements_002EIResolvedStyle_002EaspectRatio
	{
		[Token(Token = "0x6001987")]
		[Address(RVA = "0x6ACD650", Offset = "0x6ACC650", VA = "0x6ACD650", Slot = "24")]
		get
		{
			return default(Ratio);
		}
	}

	[Token(Token = "0x170006E8")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundColor
	{
		[Token(Token = "0x6001988")]
		[Address(RVA = "0x6ACD780", Offset = "0x6ACC780", VA = "0x6ACD780", Slot = "25")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006E9")]
	private Background UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundImage
	{
		[Token(Token = "0x6001989")]
		[Address(RVA = "0x6ACD8B0", Offset = "0x6ACC8B0", VA = "0x6ACD8B0", Slot = "26")]
		get
		{
			return default(Background);
		}
	}

	[Token(Token = "0x170006EA")]
	private BackgroundPosition UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundPositionX
	{
		[Token(Token = "0x600198A")]
		[Address(RVA = "0x6ACDA10", Offset = "0x6ACCA10", VA = "0x6ACDA10", Slot = "27")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x170006EB")]
	private BackgroundPosition UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundPositionY
	{
		[Token(Token = "0x600198B")]
		[Address(RVA = "0x6ACDB40", Offset = "0x6ACCB40", VA = "0x6ACDB40", Slot = "28")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x170006EC")]
	private BackgroundRepeat UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundRepeat
	{
		[Token(Token = "0x600198C")]
		[Address(RVA = "0x6ACDC70", Offset = "0x6ACCC70", VA = "0x6ACDC70", Slot = "29")]
		get
		{
			return default(BackgroundRepeat);
		}
	}

	[Token(Token = "0x170006ED")]
	private BackgroundSize UnityEngine_002EUIElements_002EIResolvedStyle_002EbackgroundSize
	{
		[Token(Token = "0x600198D")]
		[Address(RVA = "0x6ACDDA0", Offset = "0x6ACCDA0", VA = "0x6ACDDA0", Slot = "30")]
		get
		{
			return default(BackgroundSize);
		}
	}

	[Token(Token = "0x170006EE")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomColor
	{
		[Token(Token = "0x600198E")]
		[Address(RVA = "0x6ACDF00", Offset = "0x6ACCF00", VA = "0x6ACDF00", Slot = "31")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006EF")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomLeftRadius
	{
		[Token(Token = "0x600198F")]
		[Address(RVA = "0x6ACE030", Offset = "0x6ACD030", VA = "0x6ACE030", Slot = "32")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F0")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomRightRadius
	{
		[Token(Token = "0x6001990")]
		[Address(RVA = "0x6ACE160", Offset = "0x6ACD160", VA = "0x6ACE160", Slot = "33")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F1")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderBottomWidth
	{
		[Token(Token = "0x6001991")]
		[Address(RVA = "0x6ACE290", Offset = "0x6ACD290", VA = "0x6ACE290", Slot = "34")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F2")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderLeftColor
	{
		[Token(Token = "0x6001992")]
		[Address(RVA = "0x6ACE3C0", Offset = "0x6ACD3C0", VA = "0x6ACE3C0", Slot = "35")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006F3")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderLeftWidth
	{
		[Token(Token = "0x6001993")]
		[Address(RVA = "0x6ACE4F0", Offset = "0x6ACD4F0", VA = "0x6ACE4F0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F4")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderRightColor
	{
		[Token(Token = "0x6001994")]
		[Address(RVA = "0x6ACE620", Offset = "0x6ACD620", VA = "0x6ACE620", Slot = "37")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006F5")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderRightWidth
	{
		[Token(Token = "0x6001995")]
		[Address(RVA = "0x6ACE750", Offset = "0x6ACD750", VA = "0x6ACE750", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F6")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopColor
	{
		[Token(Token = "0x6001996")]
		[Address(RVA = "0x6ACE880", Offset = "0x6ACD880", VA = "0x6ACE880", Slot = "39")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006F7")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopLeftRadius
	{
		[Token(Token = "0x6001997")]
		[Address(RVA = "0x6ACE9B0", Offset = "0x6ACD9B0", VA = "0x6ACE9B0", Slot = "40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F8")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopRightRadius
	{
		[Token(Token = "0x6001998")]
		[Address(RVA = "0x6ACEAE0", Offset = "0x6ACDAE0", VA = "0x6ACEAE0", Slot = "41")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006F9")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EborderTopWidth
	{
		[Token(Token = "0x6001999")]
		[Address(RVA = "0x6ACEC10", Offset = "0x6ACDC10", VA = "0x6ACEC10", Slot = "42")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006FA")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Ebottom
	{
		[Token(Token = "0x600199A")]
		[Address(RVA = "0x6ACED40", Offset = "0x6ACDD40", VA = "0x6ACED40", Slot = "43")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170006FB")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002Ecolor
	{
		[Token(Token = "0x600199B")]
		[Address(RVA = "0x6ACEE70", Offset = "0x6ACDE70", VA = "0x6ACEE70", Slot = "44")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170006FC")]
	private DisplayStyle UnityEngine_002EUIElements_002EIResolvedStyle_002Edisplay
	{
		[Token(Token = "0x600199C")]
		[Address(RVA = "0x6ACEFA0", Offset = "0x6ACDFA0", VA = "0x6ACEFA0", Slot = "45")]
		get
		{
			return default(DisplayStyle);
		}
	}

	[Token(Token = "0x170006FD")]
	private IEnumerable<FilterFunction> UnityEngine_002EUIElements_002EIResolvedStyle_002Efilter
	{
		[Token(Token = "0x600199D")]
		[Address(RVA = "0x6ACF0D0", Offset = "0x6ACE0D0", VA = "0x6ACF0D0", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006FE")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EflexBasis
	{
		[Token(Token = "0x600199E")]
		[Address(RVA = "0x6ACF200", Offset = "0x6ACE200", VA = "0x6ACF200", Slot = "47")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x170006FF")]
	private FlexDirection UnityEngine_002EUIElements_002EIResolvedStyle_002EflexDirection
	{
		[Token(Token = "0x600199F")]
		[Address(RVA = "0x6ACF330", Offset = "0x6ACE330", VA = "0x6ACF330", Slot = "48")]
		get
		{
			return default(FlexDirection);
		}
	}

	[Token(Token = "0x17000700")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EflexGrow
	{
		[Token(Token = "0x60019A0")]
		[Address(RVA = "0x6ACF460", Offset = "0x6ACE460", VA = "0x6ACF460", Slot = "49")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000701")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EflexShrink
	{
		[Token(Token = "0x60019A1")]
		[Address(RVA = "0x6ACF590", Offset = "0x6ACE590", VA = "0x6ACF590", Slot = "50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000702")]
	private Wrap UnityEngine_002EUIElements_002EIResolvedStyle_002EflexWrap
	{
		[Token(Token = "0x60019A2")]
		[Address(RVA = "0x6ACF6C0", Offset = "0x6ACE6C0", VA = "0x6ACF6C0", Slot = "51")]
		get
		{
			return default(Wrap);
		}
	}

	[Token(Token = "0x17000703")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EfontSize
	{
		[Token(Token = "0x60019A3")]
		[Address(RVA = "0x6ACF7F0", Offset = "0x6ACE7F0", VA = "0x6ACF7F0", Slot = "52")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000704")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eheight
	{
		[Token(Token = "0x60019A4")]
		[Address(RVA = "0x6ACF920", Offset = "0x6ACE920", VA = "0x6ACF920", Slot = "53")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000705")]
	private Justify UnityEngine_002EUIElements_002EIResolvedStyle_002EjustifyContent
	{
		[Token(Token = "0x60019A5")]
		[Address(RVA = "0x6ACFA50", Offset = "0x6ACEA50", VA = "0x6ACFA50", Slot = "54")]
		get
		{
			return default(Justify);
		}
	}

	[Token(Token = "0x17000706")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eleft
	{
		[Token(Token = "0x60019A6")]
		[Address(RVA = "0x6ACFB80", Offset = "0x6ACEB80", VA = "0x6ACFB80", Slot = "55")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000707")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EletterSpacing
	{
		[Token(Token = "0x60019A7")]
		[Address(RVA = "0x6ACFCB0", Offset = "0x6ACECB0", VA = "0x6ACFCB0", Slot = "56")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000708")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginBottom
	{
		[Token(Token = "0x60019A8")]
		[Address(RVA = "0x6ACFDE0", Offset = "0x6ACEDE0", VA = "0x6ACFDE0", Slot = "57")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000709")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginLeft
	{
		[Token(Token = "0x60019A9")]
		[Address(RVA = "0x6ACFF10", Offset = "0x6ACEF10", VA = "0x6ACFF10", Slot = "58")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700070A")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginRight
	{
		[Token(Token = "0x60019AA")]
		[Address(RVA = "0x6AD0040", Offset = "0x6ACF040", VA = "0x6AD0040", Slot = "59")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700070B")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EmarginTop
	{
		[Token(Token = "0x60019AB")]
		[Address(RVA = "0x6AD0170", Offset = "0x6ACF170", VA = "0x6AD0170", Slot = "60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700070C")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EmaxHeight
	{
		[Token(Token = "0x60019AC")]
		[Address(RVA = "0x6AD02A0", Offset = "0x6ACF2A0", VA = "0x6AD02A0", Slot = "61")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x1700070D")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EmaxWidth
	{
		[Token(Token = "0x60019AD")]
		[Address(RVA = "0x6AD03D0", Offset = "0x6ACF3D0", VA = "0x6AD03D0", Slot = "62")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x1700070E")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EminHeight
	{
		[Token(Token = "0x60019AE")]
		[Address(RVA = "0x6AD0500", Offset = "0x6ACF500", VA = "0x6AD0500", Slot = "63")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x1700070F")]
	private StyleFloat UnityEngine_002EUIElements_002EIResolvedStyle_002EminWidth
	{
		[Token(Token = "0x60019AF")]
		[Address(RVA = "0x6AD0630", Offset = "0x6ACF630", VA = "0x6AD0630", Slot = "64")]
		get
		{
			return default(StyleFloat);
		}
	}

	[Token(Token = "0x17000710")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eopacity
	{
		[Token(Token = "0x60019B0")]
		[Address(RVA = "0x6AD0760", Offset = "0x6ACF760", VA = "0x6AD0760", Slot = "65")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000711")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingBottom
	{
		[Token(Token = "0x60019B1")]
		[Address(RVA = "0x6AD0890", Offset = "0x6ACF890", VA = "0x6AD0890", Slot = "66")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000712")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingLeft
	{
		[Token(Token = "0x60019B2")]
		[Address(RVA = "0x6AD09C0", Offset = "0x6ACF9C0", VA = "0x6AD09C0", Slot = "67")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000713")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingRight
	{
		[Token(Token = "0x60019B3")]
		[Address(RVA = "0x6AD0AF0", Offset = "0x6ACFAF0", VA = "0x6AD0AF0", Slot = "68")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000714")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EpaddingTop
	{
		[Token(Token = "0x60019B4")]
		[Address(RVA = "0x6AD0C20", Offset = "0x6ACFC20", VA = "0x6AD0C20", Slot = "69")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000715")]
	private Position UnityEngine_002EUIElements_002EIResolvedStyle_002Eposition
	{
		[Token(Token = "0x60019B5")]
		[Address(RVA = "0x6AD0D50", Offset = "0x6ACFD50", VA = "0x6AD0D50", Slot = "70")]
		get
		{
			return default(Position);
		}
	}

	[Token(Token = "0x17000716")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Eright
	{
		[Token(Token = "0x60019B6")]
		[Address(RVA = "0x6AD0E80", Offset = "0x6ACFE80", VA = "0x6AD0E80", Slot = "71")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000717")]
	private Rotate UnityEngine_002EUIElements_002EIResolvedStyle_002Erotate
	{
		[Token(Token = "0x60019B7")]
		[Address(RVA = "0x6AD0FB0", Offset = "0x6ACFFB0", VA = "0x6AD0FB0", Slot = "72")]
		get
		{
			return default(Rotate);
		}
	}

	[Token(Token = "0x17000718")]
	private Scale UnityEngine_002EUIElements_002EIResolvedStyle_002Escale
	{
		[Token(Token = "0x60019B8")]
		[Address(RVA = "0x6AD1110", Offset = "0x6AD0110", VA = "0x6AD1110", Slot = "73")]
		get
		{
			return default(Scale);
		}
	}

	[Token(Token = "0x17000719")]
	private TextOverflow UnityEngine_002EUIElements_002EIResolvedStyle_002EtextOverflow
	{
		[Token(Token = "0x60019B9")]
		[Address(RVA = "0x6AD1240", Offset = "0x6AD0240", VA = "0x6AD1240", Slot = "74")]
		get
		{
			return default(TextOverflow);
		}
	}

	[Token(Token = "0x1700071A")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Etop
	{
		[Token(Token = "0x60019BA")]
		[Address(RVA = "0x6AD1370", Offset = "0x6AD0370", VA = "0x6AD1370", Slot = "75")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700071B")]
	private Vector3 UnityEngine_002EUIElements_002EIResolvedStyle_002EtransformOrigin
	{
		[Token(Token = "0x60019BB")]
		[Address(RVA = "0x6AD14A0", Offset = "0x6AD04A0", VA = "0x6AD14A0", Slot = "76")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700071C")]
	private IEnumerable<TimeValue> UnityEngine_002EUIElements_002EIResolvedStyle_002EtransitionDelay
	{
		[Token(Token = "0x60019BC")]
		[Address(RVA = "0x6AD15D0", Offset = "0x6AD05D0", VA = "0x6AD15D0", Slot = "77")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071D")]
	private IEnumerable<TimeValue> UnityEngine_002EUIElements_002EIResolvedStyle_002EtransitionDuration
	{
		[Token(Token = "0x60019BD")]
		[Address(RVA = "0x6AD1700", Offset = "0x6AD0700", VA = "0x6AD1700", Slot = "78")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071E")]
	private IEnumerable<StylePropertyName> UnityEngine_002EUIElements_002EIResolvedStyle_002EtransitionProperty
	{
		[Token(Token = "0x60019BE")]
		[Address(RVA = "0x6AD1830", Offset = "0x6AD0830", VA = "0x6AD1830", Slot = "79")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700071F")]
	private IEnumerable<EasingFunction> UnityEngine_002EUIElements_002EIResolvedStyle_002EtransitionTimingFunction
	{
		[Token(Token = "0x60019BF")]
		[Address(RVA = "0x6AD1960", Offset = "0x6AD0960", VA = "0x6AD1960", Slot = "80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000720")]
	private Vector3 UnityEngine_002EUIElements_002EIResolvedStyle_002Etranslate
	{
		[Token(Token = "0x60019C0")]
		[Address(RVA = "0x6AD1A90", Offset = "0x6AD0A90", VA = "0x6AD1A90", Slot = "81")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000721")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EunityBackgroundImageTintColor
	{
		[Token(Token = "0x60019C1")]
		[Address(RVA = "0x6AD1BC0", Offset = "0x6AD0BC0", VA = "0x6AD1BC0", Slot = "82")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000722")]
	private EditorTextRenderingMode UnityEngine_002EUIElements_002EIResolvedStyle_002EunityEditorTextRenderingMode
	{
		[Token(Token = "0x60019C2")]
		[Address(RVA = "0x6AD1CF0", Offset = "0x6AD0CF0", VA = "0x6AD1CF0", Slot = "83")]
		get
		{
			return default(EditorTextRenderingMode);
		}
	}

	[Token(Token = "0x17000723")]
	private Font UnityEngine_002EUIElements_002EIResolvedStyle_002EunityFont
	{
		[Token(Token = "0x60019C3")]
		[Address(RVA = "0x6AD1E20", Offset = "0x6AD0E20", VA = "0x6AD1E20", Slot = "84")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000724")]
	private FontDefinition UnityEngine_002EUIElements_002EIResolvedStyle_002EunityFontDefinition
	{
		[Token(Token = "0x60019C4")]
		[Address(RVA = "0x6AD1F50", Offset = "0x6AD0F50", VA = "0x6AD1F50", Slot = "85")]
		get
		{
			return default(FontDefinition);
		}
	}

	[Token(Token = "0x17000725")]
	private FontStyle UnityEngine_002EUIElements_002EIResolvedStyle_002EunityFontStyleAndWeight
	{
		[Token(Token = "0x60019C5")]
		[Address(RVA = "0x6AD2080", Offset = "0x6AD1080", VA = "0x6AD2080", Slot = "86")]
		get
		{
			return default(FontStyle);
		}
	}

	[Token(Token = "0x17000726")]
	private MaterialDefinition UnityEngine_002EUIElements_002EIResolvedStyle_002EunityMaterial
	{
		[Token(Token = "0x60019C6")]
		[Address(RVA = "0x6AD21B0", Offset = "0x6AD11B0", VA = "0x6AD21B0", Slot = "87")]
		get
		{
			return default(MaterialDefinition);
		}
	}

	[Token(Token = "0x17000727")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EunityParagraphSpacing
	{
		[Token(Token = "0x60019C7")]
		[Address(RVA = "0x6AD22E0", Offset = "0x6AD12E0", VA = "0x6AD22E0", Slot = "88")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000728")]
	private int UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceBottom
	{
		[Token(Token = "0x60019C8")]
		[Address(RVA = "0x6AD2410", Offset = "0x6AD1410", VA = "0x6AD2410", Slot = "89")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000729")]
	private int UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceLeft
	{
		[Token(Token = "0x60019C9")]
		[Address(RVA = "0x6AD2540", Offset = "0x6AD1540", VA = "0x6AD2540", Slot = "90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700072A")]
	private int UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceRight
	{
		[Token(Token = "0x60019CA")]
		[Address(RVA = "0x6AD2670", Offset = "0x6AD1670", VA = "0x6AD2670", Slot = "91")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700072B")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceScale
	{
		[Token(Token = "0x60019CB")]
		[Address(RVA = "0x6AD27A0", Offset = "0x6AD17A0", VA = "0x6AD27A0", Slot = "92")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700072C")]
	private int UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceTop
	{
		[Token(Token = "0x60019CC")]
		[Address(RVA = "0x6AD28D0", Offset = "0x6AD18D0", VA = "0x6AD28D0", Slot = "93")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700072D")]
	private SliceType UnityEngine_002EUIElements_002EIResolvedStyle_002EunitySliceType
	{
		[Token(Token = "0x60019CD")]
		[Address(RVA = "0x6AD2A00", Offset = "0x6AD1A00", VA = "0x6AD2A00", Slot = "94")]
		get
		{
			return default(SliceType);
		}
	}

	[Token(Token = "0x1700072E")]
	private TextAnchor UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextAlign
	{
		[Token(Token = "0x60019CE")]
		[Address(RVA = "0x6AD2B30", Offset = "0x6AD1B30", VA = "0x6AD2B30", Slot = "95")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x1700072F")]
	private TextGeneratorType UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextGenerator
	{
		[Token(Token = "0x60019CF")]
		[Address(RVA = "0x6AD2C60", Offset = "0x6AD1C60", VA = "0x6AD2C60", Slot = "96")]
		get
		{
			return default(TextGeneratorType);
		}
	}

	[Token(Token = "0x17000730")]
	private Color UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextOutlineColor
	{
		[Token(Token = "0x60019D0")]
		[Address(RVA = "0x6AD2D90", Offset = "0x6AD1D90", VA = "0x6AD2D90", Slot = "97")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000731")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextOutlineWidth
	{
		[Token(Token = "0x60019D1")]
		[Address(RVA = "0x6AD2EC0", Offset = "0x6AD1EC0", VA = "0x6AD2EC0", Slot = "98")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000732")]
	private TextOverflowPosition UnityEngine_002EUIElements_002EIResolvedStyle_002EunityTextOverflowPosition
	{
		[Token(Token = "0x60019D2")]
		[Address(RVA = "0x6AD2FF0", Offset = "0x6AD1FF0", VA = "0x6AD2FF0", Slot = "99")]
		get
		{
			return default(TextOverflowPosition);
		}
	}

	[Token(Token = "0x17000733")]
	private Visibility UnityEngine_002EUIElements_002EIResolvedStyle_002Evisibility
	{
		[Token(Token = "0x60019D3")]
		[Address(RVA = "0x6AD3120", Offset = "0x6AD2120", VA = "0x6AD3120", Slot = "100")]
		get
		{
			return default(Visibility);
		}
	}

	[Token(Token = "0x17000734")]
	private WhiteSpace UnityEngine_002EUIElements_002EIResolvedStyle_002EwhiteSpace
	{
		[Token(Token = "0x60019D4")]
		[Address(RVA = "0x6AD3250", Offset = "0x6AD2250", VA = "0x6AD3250", Slot = "101")]
		get
		{
			return default(WhiteSpace);
		}
	}

	[Token(Token = "0x17000735")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002Ewidth
	{
		[Token(Token = "0x60019D5")]
		[Address(RVA = "0x6AD3380", Offset = "0x6AD2380", VA = "0x6AD3380", Slot = "102")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000736")]
	private float UnityEngine_002EUIElements_002EIResolvedStyle_002EwordSpacing
	{
		[Token(Token = "0x60019D6")]
		[Address(RVA = "0x6AD34B0", Offset = "0x6AD24B0", VA = "0x6AD34B0", Slot = "103")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000737")]
	internal bool hasRunningAnimations
	{
		[Token(Token = "0x60019D7")]
		[Address(RVA = "0x6AD35E0", Offset = "0x6AD25E0", VA = "0x6AD35E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000738")]
	internal bool hasCompletedAnimations
	{
		[Token(Token = "0x60019D8")]
		[Address(RVA = "0x6AD3680", Offset = "0x6AD2680", VA = "0x6AD3680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000739")]
	private int UnityEngine_002EUIElements_002EIStylePropertyAnimations_002ErunningAnimationCount
	{
		[Token(Token = "0x60019D9")]
		[Address(RVA = "0x6AD3720", Offset = "0x6AD2720", VA = "0x6AD3720", Slot = "127")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019DA")]
		[Address(RVA = "0x6AD3730", Offset = "0x6AD2730", VA = "0x6AD3730", Slot = "128")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700073A")]
	private int UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EcompletedAnimationCount
	{
		[Token(Token = "0x60019DB")]
		[Address(RVA = "0x6AD3740", Offset = "0x6AD2740", VA = "0x6AD3740", Slot = "129")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019DC")]
		[Address(RVA = "0x6AD3750", Offset = "0x6AD2750", VA = "0x6AD3750", Slot = "130")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700073B")]
	internal IStylePropertyAnimations styleAnimation
	{
		[Token(Token = "0x60019DE")]
		[Address(RVA = "0x6ABBD20", Offset = "0x6ABAD20", VA = "0x6ABBD20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700073C")]
	internal bool isCompositeRoot
	{
		[Token(Token = "0x60019FB")]
		[Address(RVA = "0x6AD5E90", Offset = "0x6AD4E90", VA = "0x6AD5E90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60019FC")]
		[Address(RVA = "0x6AD5EA0", Offset = "0x6AD4EA0", VA = "0x6AD5EA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700073D")]
	internal bool areAncestorsAndSelfDisplayed
	{
		[Token(Token = "0x60019FD")]
		[Address(RVA = "0x6AD5EC0", Offset = "0x6AD4EC0", VA = "0x6AD5EC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60019FE")]
		[Address(RVA = "0x6AD5ED0", Offset = "0x6AD4ED0", VA = "0x6AD5ED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700073E")]
	internal bool hasOneOrMorePointerCaptures
	{
		[Token(Token = "0x60019FF")]
		[Address(RVA = "0x6AD5F40", Offset = "0x6AD4F40", VA = "0x6AD5F40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A00")]
		[Address(RVA = "0x6AD5F50", Offset = "0x6AD4F50", VA = "0x6AD5F50")]
		set
		{
		}
	}

	[Token(Token = "0x1700073F")]
	internal VisualElementFlags flags
	{
		[Token(Token = "0x6001A01")]
		[Address(RVA = "0x6AD5F70", Offset = "0x6AD4F70", VA = "0x6AD5F70")]
		get
		{
			return default(VisualElementFlags);
		}
		[Token(Token = "0x6001A02")]
		[Address(RVA = "0x6AD5FA0", Offset = "0x6AD4FA0", VA = "0x6AD5FA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000740")]
	[CreateProperty]
	public string viewDataKey
	{
		[Token(Token = "0x6001A03")]
		[Address(RVA = "0x6AD6040", Offset = "0x6AD5040", VA = "0x6AD6040")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A04")]
		[Address(RVA = "0x6AD6050", Offset = "0x6AD5050", VA = "0x6AD6050")]
		set
		{
		}
	}

	[Token(Token = "0x17000741")]
	internal bool enableViewDataPersistence
	{
		[Token(Token = "0x6001A05")]
		[Address(RVA = "0x6AD6110", Offset = "0x6AD5110", VA = "0x6AD6110")]
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
		[Address(RVA = "0x6AD6120", Offset = "0x6AD5120", VA = "0x6AD6120")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A07")]
		[Address(RVA = "0x6AD61B0", Offset = "0x6AD51B0", VA = "0x6AD61B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000743")]
	public override bool canGrabFocus
	{
		[Token(Token = "0x6001A08")]
		[Address(RVA = "0x6AD6460", Offset = "0x6AD5460", VA = "0x6AD6460", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000744")]
	public override FocusController focusController
	{
		[Token(Token = "0x6001A09")]
		[Address(RVA = "0x6AD6770", Offset = "0x6AD5770", VA = "0x6AD6770", Slot = "15")]
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
		[Address(RVA = "0x6AD6830", Offset = "0x6AD5830", VA = "0x6AD6830")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A0B")]
		[Address(RVA = "0x6AD6840", Offset = "0x6AD5840", VA = "0x6AD6840")]
		set
		{
		}
	}

	[Token(Token = "0x17000746")]
	internal Color playModeTintColor
	{
		[Token(Token = "0x6001A0C")]
		[Address(RVA = "0x6AD6850", Offset = "0x6AD5850", VA = "0x6AD6850")]
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
		[Address(RVA = "0x6AD6880", Offset = "0x6AD5880", VA = "0x6AD6880")]
		get
		{
			return default(UsageHints);
		}
		[Token(Token = "0x6001A0E")]
		[Address(RVA = "0x6AD68B0", Offset = "0x6AD58B0", VA = "0x6AD68B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000748")]
	internal RenderHints renderHints
	{
		[Token(Token = "0x6001A0F")]
		[Address(RVA = "0x6AD68A0", Offset = "0x6AD58A0", VA = "0x6AD68A0")]
		get
		{
			return default(RenderHints);
		}
		[Token(Token = "0x6001A10")]
		[Address(RVA = "0x6AD6BC0", Offset = "0x6AD5BC0", VA = "0x6AD6BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000749")]
	internal bool useRenderTexture
	{
		[Token(Token = "0x6001A12")]
		[Address(RVA = "0x6AD6C30", Offset = "0x6AD5C30", VA = "0x6AD6C30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700074A")]
	internal bool isLayoutManual
	{
		[Token(Token = "0x6001A13")]
		[Address(RVA = "0x6AD70B0", Offset = "0x6AD60B0", VA = "0x6AD70B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A14")]
		[Address(RVA = "0x6AD70C0", Offset = "0x6AD60C0", VA = "0x6AD70C0")]
		private set
		{
		}
	}

	[Token(Token = "0x1700074B")]
	public float scaledPixelsPerPoint
	{
		[Token(Token = "0x6001A15")]
		[Address(RVA = "0x6AD70D0", Offset = "0x6AD60D0", VA = "0x6AD70D0")]
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
		[Address(RVA = "0x6AD7170", Offset = "0x6AD6170", VA = "0x6AD7170")]
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
		[Address(RVA = "0x6AD71D0", Offset = "0x6AD61D0", VA = "0x6AD71D0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6001A18")]
		[Address(RVA = "0x6AD7240", Offset = "0x6AD6240", VA = "0x6AD7240")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700074E")]
	internal bool hasSize
	{
		[Token(Token = "0x6001A1A")]
		[Address(RVA = "0x6AD7020", Offset = "0x6AD6020", VA = "0x6AD7020")]
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
		[Address(RVA = "0x6AD8360", Offset = "0x6AD7360", VA = "0x6AD8360")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000750")]
	protected Rect paddingRect
	{
		[Token(Token = "0x6001A1C")]
		[Address(RVA = "0x6AD8790", Offset = "0x6AD7790", VA = "0x6AD8790")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000751")]
	internal bool needs3DBounds
	{
		[Token(Token = "0x6001A1D")]
		[Address(RVA = "0x6AD8C10", Offset = "0x6AD7C10", VA = "0x6AD8C10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A1E")]
		[Address(RVA = "0x6AD8C20", Offset = "0x6AD7C20", VA = "0x6AD8C20")]
		set
		{
		}
	}

	[Token(Token = "0x17000752")]
	internal bool isLocalBounds3DDirty
	{
		[Token(Token = "0x6001A1F")]
		[Address(RVA = "0x6AD8C40", Offset = "0x6AD7C40", VA = "0x6AD8C40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A20")]
		[Address(RVA = "0x6AD8C50", Offset = "0x6AD7C50", VA = "0x6AD8C50")]
		set
		{
		}
	}

	[Token(Token = "0x17000753")]
	internal bool isLocalBoundsWithoutNested3DDirty
	{
		[Token(Token = "0x6001A21")]
		[Address(RVA = "0x6AD8C70", Offset = "0x6AD7C70", VA = "0x6AD8C70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A22")]
		[Address(RVA = "0x6AD8C80", Offset = "0x6AD7C80", VA = "0x6AD8C80")]
		set
		{
		}
	}

	[Token(Token = "0x17000754")]
	internal bool isBoundingBoxDirty
	{
		[Token(Token = "0x6001A23")]
		[Address(RVA = "0x6AD8CA0", Offset = "0x6AD7CA0", VA = "0x6AD8CA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A24")]
		[Address(RVA = "0x6AD8CB0", Offset = "0x6AD7CB0", VA = "0x6AD8CB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000755")]
	internal bool isWorldBoundingBoxDirty
	{
		[Token(Token = "0x6001A25")]
		[Address(RVA = "0x6AD8CC0", Offset = "0x6AD7CC0", VA = "0x6AD8CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000756")]
	internal bool isWorldBoundingBoxOrDependenciesDirty
	{
		[Token(Token = "0x6001A26")]
		[Address(RVA = "0x6AD8CD0", Offset = "0x6AD7CD0", VA = "0x6AD8CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000757")]
	internal Rect boundingBox
	{
		[Token(Token = "0x6001A27")]
		[Address(RVA = "0x6AD8CE0", Offset = "0x6AD7CE0", VA = "0x6AD8CE0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000758")]
	internal Rect boundingBoxWithoutNested
	{
		[Token(Token = "0x6001A28")]
		[Address(RVA = "0x6AD9730", Offset = "0x6AD8730", VA = "0x6AD9730")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000759")]
	internal Rect worldBoundingBox
	{
		[Token(Token = "0x6001A29")]
		[Address(RVA = "0x6AD97C0", Offset = "0x6AD87C0", VA = "0x6AD97C0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700075A")]
	private Rect boundingBoxInParentSpace
	{
		[Token(Token = "0x6001A2A")]
		[Address(RVA = "0x6AD9A70", Offset = "0x6AD8A70", VA = "0x6AD9A70")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700075B")]
	internal Bounds localBounds3D
	{
		[Token(Token = "0x6001A2D")]
		[Address(RVA = "0x6AD9B10", Offset = "0x6AD8B10", VA = "0x6AD9B10")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700075C")]
	internal Bounds localBoundsPicking3D
	{
		[Token(Token = "0x6001A2E")]
		[Address(RVA = "0x6ADA880", Offset = "0x6AD9880", VA = "0x6ADA880")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x1700075D")]
	internal Bounds localBounds3DWithoutNested3D
	{
		[Token(Token = "0x6001A2F")]
		[Address(RVA = "0x6ADA930", Offset = "0x6AD9930", VA = "0x6ADA930")]
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
		[Address(RVA = "0x6ADA9E0", Offset = "0x6AD99E0", VA = "0x6ADA9E0")]
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
		[Address(RVA = "0x6ADAAF0", Offset = "0x6AD9AF0", VA = "0x6ADAAF0")]
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
		[Address(RVA = "0x6ADAB70", Offset = "0x6AD9B70", VA = "0x6ADAB70")]
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
		[Address(RVA = "0x6ADABD0", Offset = "0x6AD9BD0", VA = "0x6ADABD0")]
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
		[Address(RVA = "0x6ADAC30", Offset = "0x6AD9C30", VA = "0x6ADAC30")]
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
		[Address(RVA = "0x6ADAC90", Offset = "0x6AD9C90", VA = "0x6ADAC90")]
		get
		{
			return default(bool);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001A37")]
		[Address(RVA = "0x6ADACA0", Offset = "0x6AD9CA0", VA = "0x6ADACA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000764")]
	internal bool isWorldTransformDirty
	{
		[Token(Token = "0x6001A38")]
		[Address(RVA = "0x6ADACC0", Offset = "0x6AD9CC0", VA = "0x6ADACC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A39")]
		[Address(RVA = "0x6ADACD0", Offset = "0x6AD9CD0", VA = "0x6ADACD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000765")]
	internal bool isWorldTransformInverseDirty
	{
		[Token(Token = "0x6001A3A")]
		[Address(RVA = "0x6ADACE0", Offset = "0x6AD9CE0", VA = "0x6ADACE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000766")]
	internal bool isWorldTransformInverseOrDependenciesDirty
	{
		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x6ADADF0", Offset = "0x6AD9DF0", VA = "0x6ADADF0")]
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
		[Address(RVA = "0x6ADAEE0", Offset = "0x6AD9EE0", VA = "0x6ADAEE0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x17000768")]
	internal unsafe ref Matrix4x4 worldTransformRef
	{
		[Token(Token = "0x6001A3E")]
		[Address(RVA = "0x6AD9AF0", Offset = "0x6AD8AF0", VA = "0x6AD9AF0")]
		get
		{
			return ref *(Matrix4x4*)null;
		}
	}

	[Token(Token = "0x17000769")]
	internal unsafe ref Matrix4x4 worldTransformInverse
	{
		[Token(Token = "0x6001A3F")]
		[Address(RVA = "0x6ADB340", Offset = "0x6ADA340", VA = "0x6ADB340")]
		get
		{
			return ref *(Matrix4x4*)null;
		}
	}

	[Token(Token = "0x1700076A")]
	internal Rect worldClip
	{
		[Token(Token = "0x6001A42")]
		[Address(RVA = "0x6ADB9A0", Offset = "0x6ADA9A0", VA = "0x6ADB9A0")]
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
		[Address(RVA = "0x6ADBBA0", Offset = "0x6ADABA0", VA = "0x6ADBBA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A46")]
		[Address(RVA = "0x6ADBBB0", Offset = "0x6ADABB0", VA = "0x6ADBBB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700076C")]
	internal bool boundingBoxDirtiedSinceLastLayoutPass
	{
		[Token(Token = "0x6001A47")]
		[Address(RVA = "0x6ADBBD0", Offset = "0x6ADABD0", VA = "0x6ADBBD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A48")]
		[Address(RVA = "0x6ADBBE0", Offset = "0x6ADABE0", VA = "0x6ADBBE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700076D")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal PseudoStates pseudoStates
	{
		[Token(Token = "0x6001A49")]
		[Address(RVA = "0x6ADBC00", Offset = "0x6ADAC00", VA = "0x6ADBC00")]
		get
		{
			return default(PseudoStates);
		}
		[Token(Token = "0x6001A4A")]
		[Address(RVA = "0x6ADBC10", Offset = "0x6ADAC10", VA = "0x6ADBC10")]
		set
		{
		}
	}

	[Token(Token = "0x1700076E")]
	internal int containedPointerIds
	{
		[Token(Token = "0x6001A4D")]
		[Address(RVA = "0x6ADBD40", Offset = "0x6ADAD40", VA = "0x6ADBD40")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001A4E")]
		[Address(RVA = "0x6ADBD50", Offset = "0x6ADAD50", VA = "0x6ADBD50")]
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
		[Address(RVA = "0x6ADC1F0", Offset = "0x6ADB1F0", VA = "0x6ADC1F0")]
		get
		{
			return default(PickingMode);
		}
		[Token(Token = "0x6001A54")]
		[Address(RVA = "0x6ADC200", Offset = "0x6ADB200", VA = "0x6ADC200")]
		set
		{
		}
	}

	[Token(Token = "0x17000770")]
	[CreateProperty]
	public string name
	{
		[Token(Token = "0x6001A55")]
		[Address(RVA = "0x6ADC2A0", Offset = "0x6ADB2A0", VA = "0x6ADC2A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A56")]
		[Address(RVA = "0x6ADC2B0", Offset = "0x6ADB2B0", VA = "0x6ADC2B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000771")]
	internal List<string> classList
	{
		[Token(Token = "0x6001A57")]
		[Address(RVA = "0x6ADC360", Offset = "0x6ADB360", VA = "0x6ADC360")]
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
		[Address(RVA = "0x6ADC420", Offset = "0x6ADB420", VA = "0x6ADC420")]
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
		[Address(RVA = "0x6ADC580", Offset = "0x6ADB580", VA = "0x6ADC580")]
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
		[Address(RVA = "0x6AB35E0", Offset = "0x6AB25E0", VA = "0x6AB35E0")]
		get
		{
			return ref *(LayoutNode*)null;
		}
	}

	[Token(Token = "0x17000775")]
	internal unsafe ref ComputedStyle computedStyle
	{
		[Token(Token = "0x6001A5B")]
		[Address(RVA = "0x6AB35F0", Offset = "0x6AB25F0", VA = "0x6AB35F0")]
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
		[Address(RVA = "0x6ADC5A0", Offset = "0x6ADB5A0", VA = "0x6ADC5A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000777")]
	internal bool styleInitialized
	{
		[Token(Token = "0x6001A5D")]
		[Address(RVA = "0x6ABBD10", Offset = "0x6ABAD10", VA = "0x6ABBD10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A5E")]
		[Address(RVA = "0x6ADC5B0", Offset = "0x6ADB5B0", VA = "0x6ADC5B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000778")]
	private bool isParentEnabledInHierarchy
	{
		[Token(Token = "0x6001A6D")]
		[Address(RVA = "0x6ADF3A0", Offset = "0x6ADE3A0", VA = "0x6ADF3A0")]
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
		[Address(RVA = "0x6AD6760", Offset = "0x6AD5760", VA = "0x6AD6760")]
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
		[Address(RVA = "0x6ADF790", Offset = "0x6ADE790", VA = "0x6ADF790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A70")]
		[Address(RVA = "0x6ADCB60", Offset = "0x6ADBB60", VA = "0x6ADCB60")]
		set
		{
		}
	}

	[Token(Token = "0x1700077B")]
	[CreateProperty]
	public LanguageDirection languageDirection
	{
		[Token(Token = "0x6001A73")]
		[Address(RVA = "0x6ADF8E0", Offset = "0x6ADE8E0", VA = "0x6ADF8E0")]
		get
		{
			return default(LanguageDirection);
		}
		[Token(Token = "0x6001A74")]
		[Address(RVA = "0x6ADF8F0", Offset = "0x6ADE8F0", VA = "0x6ADF8F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700077C")]
	internal LanguageDirection localLanguageDirection
	{
		[Token(Token = "0x6001A75")]
		[Address(RVA = "0x6ADFA80", Offset = "0x6ADEA80", VA = "0x6ADFA80")]
		get
		{
			return default(LanguageDirection);
		}
		[Token(Token = "0x6001A76")]
		[Address(RVA = "0x6ADF980", Offset = "0x6ADE980", VA = "0x6ADF980")]
		set
		{
		}
	}

	[Token(Token = "0x1700077D")]
	[CreateProperty]
	public bool visible
	{
		[Token(Token = "0x6001A77")]
		[Address(RVA = "0x6AD6620", Offset = "0x6AD5620", VA = "0x6AD6620")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A78")]
		[Address(RVA = "0x6ADFA90", Offset = "0x6ADEA90", VA = "0x6ADFA90")]
		set
		{
		}
	}

	[Token(Token = "0x1700077E")]
	public Action<MeshGenerationContext> generateVisualContent
	{
		[Token(Token = "0x6001A7A")]
		[Address(RVA = "0x6ADFC70", Offset = "0x6ADEC70", VA = "0x6ADFC70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A7B")]
		[Address(RVA = "0x6ADFC80", Offset = "0x6ADEC80", VA = "0x6ADFC80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700077F")]
	internal bool requireMeasureFunction
	{
		[Token(Token = "0x6001A84")]
		[Address(RVA = "0x6AE0480", Offset = "0x6ADF480", VA = "0x6AE0480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A85")]
		[Address(RVA = "0x6AE0490", Offset = "0x6ADF490", VA = "0x6AE0490")]
		set
		{
		}
	}

	[Token(Token = "0x17000780")]
	[CreateProperty]
	public object dataSource
	{
		[Token(Token = "0x6001AA4")]
		[Address(RVA = "0x6AE4510", Offset = "0x6AE3510", VA = "0x6AE4510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AA5")]
		[Address(RVA = "0x6AE4520", Offset = "0x6AE3520", VA = "0x6AE4520")]
		set
		{
		}
	}

	[Token(Token = "0x17000781")]
	[CreateProperty]
	public PropertyPath dataSourcePath
	{
		[Token(Token = "0x6001AA6")]
		[Address(RVA = "0x6AE46D0", Offset = "0x6AE36D0", VA = "0x6AE46D0")]
		get
		{
			return default(PropertyPath);
		}
		[Token(Token = "0x6001AA7")]
		[Address(RVA = "0x6AE4750", Offset = "0x6AE3750", VA = "0x6AE4750")]
		set
		{
		}
	}

	[Token(Token = "0x17000782")]
	internal bool isDataSourcePathEmpty
	{
		[Token(Token = "0x6001AA8")]
		[Address(RVA = "0x6AE48E0", Offset = "0x6AE38E0", VA = "0x6AE48E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000783")]
	internal VisualElement nextParentWithEventInterests
	{
		[Token(Token = "0x6001AB2")]
		[Address(RVA = "0x6AE4B70", Offset = "0x6AE3B70", VA = "0x6AE4B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000784")]
	internal int eventInterestParentCategories
	{
		[Token(Token = "0x6001AB5")]
		[Address(RVA = "0x6AE4E10", Offset = "0x6AE3E10", VA = "0x6AE4E10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000785")]
	internal bool isEventInterestParentCategoriesDirty
	{
		[Token(Token = "0x6001AB6")]
		[Address(RVA = "0x6AE4E40", Offset = "0x6AE3E40", VA = "0x6AE4E40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001AB7")]
		[Address(RVA = "0x6AE4F30", Offset = "0x6AE3F30", VA = "0x6AE4F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000786")]
	public IExperimentalFeatures experimental
	{
		[Token(Token = "0x6001AC4")]
		[Address(RVA = "0x6AE5050", Offset = "0x6AE4050", VA = "0x6AE5050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000787")]
	private ITransitionAnimations UnityEngine_002EUIElements_002EIExperimentalFeatures_002Eanimation
	{
		[Token(Token = "0x6001AC5")]
		[Address(RVA = "0x6AE5060", Offset = "0x6AE4060", VA = "0x6AE5060", Slot = "132")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000788")]
	public Hierarchy hierarchy
	{
		[Token(Token = "0x6001AC6")]
		[Address(RVA = "0x6AE5070", Offset = "0x6AE4070", VA = "0x6AE5070")]
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
		[Address(RVA = "0x6AE5080", Offset = "0x6AE4080", VA = "0x6AE5080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700078A")]
	internal bool disableClipping
	{
		[Token(Token = "0x6001AC8")]
		[Address(RVA = "0x6AE50D0", Offset = "0x6AE40D0", VA = "0x6AE50D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001AC9")]
		[Address(RVA = "0x6AE50E0", Offset = "0x6AE40E0", VA = "0x6AE50E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700078B")]
	internal bool disableRendering
	{
		[Token(Token = "0x6001ACB")]
		[Address(RVA = "0x6AE5100", Offset = "0x6AE4100", VA = "0x6AE5100")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001ACC")]
		[Address(RVA = "0x6AE5110", Offset = "0x6AE4110", VA = "0x6AE5110")]
		set
		{
		}
	}

	[Token(Token = "0x1700078C")]
	public VisualElement parent
	{
		[Token(Token = "0x6001ACD")]
		[Address(RVA = "0x6AD6610", Offset = "0x6AD5610", VA = "0x6AD6610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078D")]
	internal BaseVisualElementPanel elementPanel
	{
		[Token(Token = "0x6001ACE")]
		[Address(RVA = "0x6AE5160", Offset = "0x6AE4160", VA = "0x6AE5160")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001ACF")]
		[Address(RVA = "0x6AE5170", Offset = "0x6AE4170", VA = "0x6AE5170")]
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
		[Address(RVA = "0x6AD6820", Offset = "0x6AD5820", VA = "0x6AD6820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700078F")]
	public virtual VisualElement contentContainer
	{
		[Token(Token = "0x6001AD1")]
		[Address(RVA = "0x6AE5190", Offset = "0x6AE4190", VA = "0x6AE5190", Slot = "138")]
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
		[Address(RVA = "0x6AE51A0", Offset = "0x6AE41A0", VA = "0x6AE51A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AD3")]
		[Address(RVA = "0x6AE51B0", Offset = "0x6AE41B0", VA = "0x6AE51B0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x17000791")]
	public VisualElement this[int key]
	{
		[Token(Token = "0x6001ADB")]
		[Address(RVA = "0x6AE5470", Offset = "0x6AE4470", VA = "0x6AE5470")]
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
		[Address(RVA = "0x6AE54E0", Offset = "0x6AE44E0", VA = "0x6AE54E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000793")]
	private Vector3 positionWithLayout
	{
		[Token(Token = "0x6001AF3")]
		[Address(RVA = "0x6ADB430", Offset = "0x6ADA430", VA = "0x6ADB430")]
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
		[Address(RVA = "0x6AE63A0", Offset = "0x6AE53A0", VA = "0x6AE63A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000795")]
	internal bool has3DTransform
	{
		[Token(Token = "0x6001AF6")]
		[Address(RVA = "0x6AE64C0", Offset = "0x6AE54C0", VA = "0x6AE64C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000796")]
	private bool has3DTranslation
	{
		[Token(Token = "0x6001AF7")]
		[Address(RVA = "0x6AE65F0", Offset = "0x6AE55F0", VA = "0x6AE65F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000797")]
	private bool has3DRotation
	{
		[Token(Token = "0x6001AF8")]
		[Address(RVA = "0x6AE6620", Offset = "0x6AE5620", VA = "0x6AE6620")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000798")]
	public IVisualElementScheduler schedule
	{
		[Token(Token = "0x6001B0A")]
		[Address(RVA = "0x6AE7970", Offset = "0x6AE6970", VA = "0x6AE7970")]
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
		[Address(RVA = "0x6AB9C90", Offset = "0x6AB8C90", VA = "0x6AB9C90")]
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
		[Address(RVA = "0x6ACD350", Offset = "0x6ACC350", VA = "0x6ACD350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700079B")]
	public ICustomStyle customStyle
	{
		[Token(Token = "0x6001B0F")]
		[Address(RVA = "0x6AE7AE0", Offset = "0x6AE6AE0", VA = "0x6AE7AE0")]
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
		[Address(RVA = "0x6AE50B0", Offset = "0x6AE40B0", VA = "0x6AE50B0")]
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
		[Address(RVA = "0x6ADD240", Offset = "0x6ADC240", VA = "0x6ADD240")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B18")]
		[Address(RVA = "0x6AE7E30", Offset = "0x6AE6E30", VA = "0x6AE7E30")]
		set
		{
		}
	}

	[Token(Token = "0x1700079E")]
	private TypeData typeData
	{
		[Token(Token = "0x6001B19")]
		[Address(RVA = "0x6ADC440", Offset = "0x6ADB440", VA = "0x6ADC440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x6AD3760", Offset = "0x6AD2760", VA = "0x6AD3760")]
	private IStylePropertyAnimationSystem GetStylePropertyAnimationSystem()
	{
		return null;
	}

	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x6AD3790", Offset = "0x6AD2790", VA = "0x6AD3790", Slot = "104")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, float from, float to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x6AD38A0", Offset = "0x6AD28A0", VA = "0x6AD38A0", Slot = "105")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, int from, int to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x6AD39C0", Offset = "0x6AD29C0", VA = "0x6AD39C0", Slot = "106")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Length from, Length to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x6AD3AE0", Offset = "0x6AD2AE0", VA = "0x6AD3AE0", Slot = "107")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Color from, Color to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E3")]
	[Address(RVA = "0x6AD3C10", Offset = "0x6AD2C10", VA = "0x6AD3C10", Slot = "108")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStartEnum(StylePropertyId id, int from, int to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E4")]
	[Address(RVA = "0x6AD3D30", Offset = "0x6AD2D30", VA = "0x6AD3D30", Slot = "109")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Background from, Background to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E5")]
	[Address(RVA = "0x6AD3E70", Offset = "0x6AD2E70", VA = "0x6AD3E70", Slot = "110")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, FontDefinition from, FontDefinition to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x6AD3FD0", Offset = "0x6AD2FD0", VA = "0x6AD3FD0", Slot = "111")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Font from, Font to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E7")]
	[Address(RVA = "0x6AD40F0", Offset = "0x6AD30F0", VA = "0x6AD40F0", Slot = "112")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, TextShadow from, TextShadow to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E8")]
	[Address(RVA = "0x6AD4230", Offset = "0x6AD3230", VA = "0x6AD4230", Slot = "113")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Scale from, Scale to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E9")]
	[Address(RVA = "0x6AD4360", Offset = "0x6AD3360", VA = "0x6AD4360", Slot = "114")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Translate from, Translate to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x6AD44A0", Offset = "0x6AD34A0", VA = "0x6AD44A0", Slot = "115")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Rotate from, Rotate to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x6AD45E0", Offset = "0x6AD35E0", VA = "0x6AD45E0", Slot = "116")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, Ratio from, Ratio to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x6AD4700", Offset = "0x6AD3700", VA = "0x6AD4700", Slot = "117")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, TransformOrigin from, TransformOrigin to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x6AD4840", Offset = "0x6AD3840", VA = "0x6AD4840", Slot = "118")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, BackgroundPosition from, BackgroundPosition to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EE")]
	[Address(RVA = "0x6AD4980", Offset = "0x6AD3980", VA = "0x6AD4980", Slot = "119")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, BackgroundRepeat from, BackgroundRepeat to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x6AD4AA0", Offset = "0x6AD3AA0", VA = "0x6AD4AA0", Slot = "120")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, BackgroundSize from, BackgroundSize to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x6AD4BE0", Offset = "0x6AD3BE0", VA = "0x6AD4BE0", Slot = "121")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, List<FilterFunction> from, List<FilterFunction> to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x6AD4D00", Offset = "0x6AD3D00", VA = "0x6AD4D00", Slot = "122")]
	private bool UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EStart(StylePropertyId id, MaterialDefinition from, MaterialDefinition to, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x6AD4E60", Offset = "0x6AD3E60", VA = "0x6AD4E60", Slot = "125")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002ECancelAnimation(StylePropertyId id)
	{
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x6AD4F40", Offset = "0x6AD3F40", VA = "0x6AD4F40", Slot = "126")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002ECancelAllAnimations()
	{
	}

	[Token(Token = "0x60019F4")]
	[Address(RVA = "0x6AD5150", Offset = "0x6AD4150", VA = "0x6AD5150", Slot = "123")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EUpdateAnimation(StylePropertyId id)
	{
	}

	[Token(Token = "0x60019F5")]
	[Address(RVA = "0x6AD5230", Offset = "0x6AD4230", VA = "0x6AD5230", Slot = "124")]
	private void UnityEngine_002EUIElements_002EIStylePropertyAnimations_002EGetAllAnimations(List<StylePropertyId> outPropertyIds)
	{
	}

	[Token(Token = "0x60019F6")]
	[Address(RVA = "0x6AD5450", Offset = "0x6AD4450", VA = "0x6AD5450")]
	internal bool TryConvertLengthUnits(StylePropertyId id, ref Length from, ref Length to, int subPropertyIndex = 0)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F7")]
	[Address(RVA = "0x6AD5CA0", Offset = "0x6AD4CA0", VA = "0x6AD5CA0")]
	internal bool TryConvertTransformOriginUnits(ref TransformOrigin from, ref TransformOrigin to)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F8")]
	[Address(RVA = "0x6AD5D30", Offset = "0x6AD4D30", VA = "0x6AD5D30")]
	internal bool TryConvertTranslateUnits(ref Translate from, ref Translate to)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F9")]
	[Address(RVA = "0x6AD5DC0", Offset = "0x6AD4DC0", VA = "0x6AD5DC0")]
	internal bool TryConvertBackgroundSizeUnits(ref BackgroundSize from, ref BackgroundSize to)
	{
		return default(bool);
	}

	[Token(Token = "0x60019FA")]
	[Address(RVA = "0x6AD5710", Offset = "0x6AD4710", VA = "0x6AD5710")]
	private float? GetParentSizeForLengthConversion(StylePropertyId id, int subPropertyIndex = 0)
	{
		return null;
	}

	[Token(Token = "0x6001A11")]
	[Address(RVA = "0x6AD6C20", Offset = "0x6AD5C20", VA = "0x6AD6C20")]
	internal void MarkRenderHintsClean()
	{
	}

	[Token(Token = "0x6001A19")]
	[Address(RVA = "0x6AD7CD0", Offset = "0x6AD6CD0", VA = "0x6AD7CD0")]
	internal void ClearManualLayout()
	{
	}

	[Token(Token = "0x6001A2B")]
	[Address(RVA = "0x6AD8D10", Offset = "0x6AD7D10", VA = "0x6AD8D10")]
	internal void UpdateBoundingBox()
	{
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x6AD9930", Offset = "0x6AD8930", VA = "0x6AD9930")]
	internal void UpdateWorldBoundingBox()
	{
	}

	[Token(Token = "0x6001A30")]
	[Address(RVA = "0x6AD9BC0", Offset = "0x6AD8BC0", VA = "0x6AD9BC0")]
	private void UpdateBounds3D()
	{
	}

	[Token(Token = "0x6001A3B")]
	[Address(RVA = "0x6ADACF0", Offset = "0x6AD9CF0", VA = "0x6ADACF0")]
	internal unsafe ref Matrix4x4 GetWorldTransformInverse(out bool isSingular)
	{
		return ref *(Matrix4x4*)null;
	}

	[Token(Token = "0x6001A40")]
	[Address(RVA = "0x6ADAF40", Offset = "0x6AD9F40", VA = "0x6ADAF40")]
	internal void UpdateWorldTransform()
	{
	}

	[Token(Token = "0x6001A41")]
	[Address(RVA = "0x6ADAE00", Offset = "0x6AD9E00", VA = "0x6ADAE00")]
	internal void UpdateWorldTransformInverse()
	{
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x6ADBA50", Offset = "0x6ADAA50", VA = "0x6ADBA50")]
	internal void EnsureWorldTransformAndClipUpToDate()
	{
	}

	[Token(Token = "0x6001A44")]
	[Address(RVA = "0x6ADBAA0", Offset = "0x6ADAAA0", VA = "0x6ADBAA0")]
	internal static Rect ComputeAAAlignedBound(Rect position, Matrix4x4 mat)
	{
		return default(Rect);
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x6ADBC70", Offset = "0x6ADAC70", VA = "0x6ADBC70")]
	public void SetActivePseudoState(bool value)
	{
	}

	[Token(Token = "0x6001A4C")]
	[Address(RVA = "0x6ADBCD0", Offset = "0x6ADACD0", VA = "0x6ADBCD0")]
	public void SetCheckedPseudoState(bool value)
	{
	}

	[Token(Token = "0x6001A4F")]
	[Address(RVA = "0x6ADBD60", Offset = "0x6ADAD60", VA = "0x6ADBD60")]
	internal void UpdateHoverPseudoState()
	{
	}

	[Token(Token = "0x6001A50")]
	[Address(RVA = "0x6ADBFC0", Offset = "0x6ADAFC0", VA = "0x6ADBFC0")]
	private static bool IsPartOfCapturedChain(VisualElement self, in IEventHandler capturingElement)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A51")]
	[Address(RVA = "0x6ADC0F0", Offset = "0x6ADB0F0", VA = "0x6ADC0F0")]
	internal void UpdateHoverPseudoStateAfterCaptureChange(int pointerId)
	{
	}

	[Token(Token = "0x6001A52")]
	[Address(RVA = "0x6ADC170", Offset = "0x6ADB170", VA = "0x6ADC170")]
	internal void UpdatePointerCaptureFlag()
	{
	}

	[Token(Token = "0x6001A5F")]
	[Address(RVA = "0x6ADC5D0", Offset = "0x6ADB5D0", VA = "0x6ADC5D0")]
	private void ChangeIMGUIContainerCount(int delta)
	{
	}

	[Token(Token = "0x6001A60")]
	[Address(RVA = "0x6ADC620", Offset = "0x6ADB620", VA = "0x6ADC620")]
	public VisualElement()
	{
	}

	[Token(Token = "0x6001A61")]
	[Address(RVA = "0x6ADCD20", Offset = "0x6ADBD20", VA = "0x6ADCD20", Slot = "1")]
	~VisualElement()
	{
	}

	[Token(Token = "0x6001A62")]
	[Address(RVA = "0x6ADCEF0", Offset = "0x6ADBEF0", VA = "0x6ADCEF0")]
	internal void SetTooltip(TooltipEvent e)
	{
	}

	[Token(Token = "0x6001A63")]
	[Address(RVA = "0x6ADD3A0", Offset = "0x6ADC3A0", VA = "0x6ADD3A0", Slot = "19")]
	public sealed override void Focus()
	{
	}

	[Token(Token = "0x6001A64")]
	[Address(RVA = "0x6ADD430", Offset = "0x6ADC430", VA = "0x6ADD430")]
	internal long TimeSinceStartupMs()
	{
		return default(long);
	}

	[Token(Token = "0x6001A65")]
	[Address(RVA = "0x6ADD4A0", Offset = "0x6ADC4A0", VA = "0x6ADD4A0")]
	internal void SetPanel(BaseVisualElementPanel p)
	{
	}

	[Token(Token = "0x6001A66")]
	[Address(RVA = "0x6ADE280", Offset = "0x6ADD280", VA = "0x6ADE280")]
	private void WillChangePanel(BaseVisualElementPanel destinationPanel)
	{
	}

	[Token(Token = "0x6001A67")]
	[Address(RVA = "0x6ADE5A0", Offset = "0x6ADD5A0", VA = "0x6ADE5A0")]
	private void HasChangedPanel(BaseVisualElementPanel prevPanel)
	{
	}

	[Token(Token = "0x6001A68")]
	[Address(RVA = "0x6ADEEC0", Offset = "0x6ADDEC0", VA = "0x6ADEEC0", Slot = "5")]
	public sealed override void SendEvent(EventBase e)
	{
	}

	[Token(Token = "0x6001A69")]
	[Address(RVA = "0x6ADEEE0", Offset = "0x6ADDEE0", VA = "0x6ADEEE0", Slot = "6")]
	internal sealed override void SendEvent(EventBase e, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x6001A6A")]
	[Address(RVA = "0x6AB35B0", Offset = "0x6AB25B0", VA = "0x6AB35B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void IncrementVersion(VersionChangeType changeType)
	{
	}

	[Token(Token = "0x6001A6B")]
	[Address(RVA = "0x6ADE580", Offset = "0x6ADD580", VA = "0x6ADE580")]
	internal void InvokeHierarchyChanged(HierarchyChangeType changeType, [Optional] IReadOnlyList<VisualElement> additionalContext)
	{
	}

	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x6ADEF00", Offset = "0x6ADDF00", VA = "0x6ADEF00")]
	private bool SetEnabledFromHierarchyPrivate(bool state)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A71")]
	[Address(RVA = "0x6ADF850", Offset = "0x6ADE850", VA = "0x6ADF850")]
	public void SetEnabled(bool value)
	{
	}

	[Token(Token = "0x6001A72")]
	[Address(RVA = "0x6ADF7A0", Offset = "0x6ADE7A0", VA = "0x6ADF7A0")]
	private void PropagateEnabledToChildren(bool value)
	{
	}

	[Token(Token = "0x6001A79")]
	[Address(RVA = "0x6ADFC40", Offset = "0x6ADEC40", VA = "0x6ADFC40")]
	public void MarkDirtyRepaint()
	{
	}

	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x6ADFCA0", Offset = "0x6ADECA0", VA = "0x6ADFCA0")]
	internal void InvokeGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x6ADFE70", Offset = "0x6ADEE70", VA = "0x6ADFE70")]
	internal void GetFullHierarchicalViewDataKey(StringBuilder key)
	{
	}

	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x6ADFF00", Offset = "0x6ADEF00", VA = "0x6ADFF00")]
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
	[Address(RVA = "0x6ADFF80", Offset = "0x6ADEF80", VA = "0x6ADFF80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void OverwriteFromViewData(object obj, string key)
	{
	}

	[Token(Token = "0x6001A81")]
	[Address(RVA = "0x6AE02A0", Offset = "0x6ADF2A0", VA = "0x6AE02A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void SaveViewData()
	{
	}

	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x6AE0320", Offset = "0x6ADF320", VA = "0x6AE0320", Slot = "135")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal virtual void OnViewDataReady()
	{
	}

	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x6AE0330", Offset = "0x6ADF330", VA = "0x6AE0330", Slot = "136")]
	public virtual bool ContainsPoint(Vector2 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A86")]
	[Address(RVA = "0x6AE0540", Offset = "0x6ADF540", VA = "0x6AE0540")]
	private void AssignMeasureFunction()
	{
	}

	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x6AE0570", Offset = "0x6ADF570", VA = "0x6AE0570")]
	private void RemoveMeasureFunction()
	{
	}

	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x6AE05A0", Offset = "0x6ADF5A0", VA = "0x6AE05A0", Slot = "137")]
	protected internal virtual Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x6AE05B0", Offset = "0x6ADF5B0", VA = "0x6AE05B0")]
	internal static void Measure(VisualElement ve, ref LayoutNode node, float width, LayoutMeasureMode widthMode, float height, LayoutMeasureMode heightMode, out LayoutSize result)
	{
	}

	[Token(Token = "0x6001A8A")]
	[Address(RVA = "0x6AE0730", Offset = "0x6ADF730", VA = "0x6AE0730")]
	private void FinalizeLayout()
	{
	}

	[Token(Token = "0x6001A8B")]
	[Address(RVA = "0x6AE0790", Offset = "0x6ADF790", VA = "0x6AE0790")]
	internal void SetInlineRule(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x6001A8C")]
	[Address(RVA = "0x6AE0880", Offset = "0x6ADF880", VA = "0x6AE0880")]
	internal void SetComputedStyle(ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x6001A8D")]
	[Address(RVA = "0x6AE0A80", Offset = "0x6ADFA80", VA = "0x6AE0A80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001A8E")]
	[Address(RVA = "0x6AE0D50", Offset = "0x6ADFD50", VA = "0x6AE0D50")]
	internal List<string> GetClassesForIteration()
	{
		return null;
	}

	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x6ADF540", Offset = "0x6ADE540", VA = "0x6ADF540")]
	public void AddToClassList(string className)
	{
	}

	[Token(Token = "0x6001A90")]
	[Address(RVA = "0x6ADF400", Offset = "0x6ADE400", VA = "0x6ADF400")]
	public void RemoveFromClassList(string className)
	{
	}

	[Token(Token = "0x6001A91")]
	[Address(RVA = "0x6ADF780", Offset = "0x6ADE780", VA = "0x6ADF780")]
	public void EnableInClassList(string className, bool enable)
	{
	}

	[Token(Token = "0x6001A92")]
	[Address(RVA = "0x6AE0D60", Offset = "0x6ADFD60", VA = "0x6AE0D60")]
	public bool ClassListContains(string cls)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A93")]
	[Address(RVA = "0x6AE0E00", Offset = "0x6ADFE00", VA = "0x6AE0E00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
	internal object GetProperty(PropertyName key)
	{
		return null;
	}

	[Token(Token = "0x6001A94")]
	[Address(RVA = "0x6AE0FD0", Offset = "0x6ADFFD0", VA = "0x6AE0FD0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
	internal void SetProperty(PropertyName key, object value)
	{
	}

	[Token(Token = "0x6001A95")]
	[Address(RVA = "0x6AE1030", Offset = "0x6AE0030", VA = "0x6AE1030")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
	internal bool HasProperty(PropertyName key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A96")]
	[Address(RVA = "0x6AE10B0", Offset = "0x6AE00B0", VA = "0x6AE10B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal bool ClearProperty(PropertyName key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A97")]
	[Address(RVA = "0x6AE0E90", Offset = "0x6ADFE90", VA = "0x6AE0E90")]
	private static void CheckUserKeyArgument(PropertyName key)
	{
	}

	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x6AD63B0", Offset = "0x6AD53B0", VA = "0x6AD63B0")]
	private void SetPropertyInternal(PropertyName key, object value)
	{
	}

	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x6AE1130", Offset = "0x6AE0130", VA = "0x6AE1130")]
	internal void UpdateCursorStyle(long eventType)
	{
	}

	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x6AE15A0", Offset = "0x6AE05A0", VA = "0x6AE15A0")]
	private VisualElementAnimationSystem GetAnimationSystem()
	{
		return null;
	}

	[Token(Token = "0x6001A9B")]
	[Address(RVA = "0x6AE1620", Offset = "0x6AE0620", VA = "0x6AE1620")]
	internal void RegisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6001A9C")]
	[Address(RVA = "0x6AE17B0", Offset = "0x6AE07B0", VA = "0x6AE17B0")]
	internal void UnregisterAnimation(IValueAnimationUpdate anim)
	{
	}

	[Token(Token = "0x6001A9D")]
	[Address(RVA = "0x6ADEA60", Offset = "0x6ADDA60", VA = "0x6ADEA60")]
	private void UnregisterRunningAnimations()
	{
	}

	[Token(Token = "0x6001A9E")]
	[Address(RVA = "0x6ADECC0", Offset = "0x6ADDCC0", VA = "0x6ADECC0")]
	private void RegisterRunningAnimations()
	{
	}

	[Token(Token = "0x6001A9F")]
	private static ValueAnimation<T> StartAnimation<T>(ValueAnimation<T> anim, Func<VisualElement, T> fromValueGetter, T to, int durationMs, Action<VisualElement, T> onValueChanged)
	{
		return null;
	}

	[Token(Token = "0x6001AA0")]
	[Address(RVA = "0x6AE1880", Offset = "0x6AE0880", VA = "0x6AE1880")]
	private static void AssignStyleValues(VisualElement ve, StyleValues src)
	{
	}

	[Token(Token = "0x6001AA1")]
	[Address(RVA = "0x6AE3080", Offset = "0x6AE2080", VA = "0x6AE3080")]
	private StyleValues ReadCurrentValues(VisualElement ve, StyleValues targetValuesToRead)
	{
		return default(StyleValues);
	}

	[Token(Token = "0x6001AA2")]
	[Address(RVA = "0x6AE42D0", Offset = "0x6AE32D0", VA = "0x6AE42D0", Slot = "131")]
	private ValueAnimation<StyleValues> UnityEngine_002EUIElements_002EExperimental_002EITransitionAnimations_002EStart(StyleValues to, int durationMs)
	{
		return null;
	}

	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x6AE43C0", Offset = "0x6AE33C0", VA = "0x6AE43C0")]
	private ValueAnimation<StyleValues> Start(Func<VisualElement, StyleValues> fromValueGetter, StyleValues to, int durationMs)
	{
		return null;
	}

	[Token(Token = "0x6001AA9")]
	[Address(RVA = "0x6AE4900", Offset = "0x6AE3900", VA = "0x6AE4900")]
	public bool TryGetBinding(BindingId bindingId, out Binding binding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AAA")]
	[Address(RVA = "0x6ADED80", Offset = "0x6ADDD80", VA = "0x6ADED80")]
	private void ProcessBindingRequests()
	{
	}

	[Token(Token = "0x6001AAB")]
	[Address(RVA = "0x6ADEBA0", Offset = "0x6ADDBA0", VA = "0x6ADEBA0")]
	private void CreateBindingRequests()
	{
	}

	[Token(Token = "0x6001AAC")]
	[Address(RVA = "0x6AE4650", Offset = "0x6AE3650", VA = "0x6AE4650")]
	private void TrackSource(object previous, object current)
	{
	}

	[Token(Token = "0x6001AAD")]
	[Address(RVA = "0x6ADEC30", Offset = "0x6ADDC30", VA = "0x6ADEC30")]
	private void DetachDataSource()
	{
	}

	[Token(Token = "0x6001AAE")]
	[Address(RVA = "0x6ADEE40", Offset = "0x6ADDE40", VA = "0x6ADEE40")]
	private void AttachDataSource()
	{
	}

	[Token(Token = "0x6001AAF")]
	[Address(RVA = "0x6AE49E0", Offset = "0x6AE39E0", VA = "0x6AE49E0")]
	private void DirtyNextParentWithEventInterests()
	{
	}

	[Token(Token = "0x6001AB0")]
	[Address(RVA = "0x6AE4A60", Offset = "0x6AE3A60", VA = "0x6AE4A60")]
	internal void SetAsNextParentWithEventInterests()
	{
	}

	[Token(Token = "0x6001AB1")]
	[Address(RVA = "0x6AE4B20", Offset = "0x6AE3B20", VA = "0x6AE4B20")]
	internal bool GetCachedNextParentWithEventInterests(out VisualElement nextParent)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AB3")]
	[Address(RVA = "0x6AE4D40", Offset = "0x6AE3D40", VA = "0x6AE4D40")]
	private void PropagateCachedNextParentWithEventInterests(VisualElement nextParent, VisualElement stopParent)
	{
	}

	[Token(Token = "0x6001AB4")]
	[Address(RVA = "0x6AE4DF0", Offset = "0x6AE3DF0", VA = "0x6AE4DF0")]
	internal void AddEventCallbackCategories(int eventCategories, CallbackOptions callbackOptions)
	{
	}

	[Token(Token = "0x6001AB8")]
	[Address(RVA = "0x6ADCBF0", Offset = "0x6ADBBF0", VA = "0x6ADCBF0")]
	private void UpdateEventInterestSelfCategories()
	{
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x6AE4E50", Offset = "0x6AE3E50", VA = "0x6AE4E50")]
	private void UpdateEventInterestParentCategories()
	{
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x6AE4F40", Offset = "0x6AE3F40", VA = "0x6AE4F40")]
	internal bool HasParentEventInterests(EventCategory eventCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABB")]
	[Address(RVA = "0x6AE4F80", Offset = "0x6AE3F80", VA = "0x6AE4F80")]
	internal bool HasParentEventInterests(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABC")]
	[Address(RVA = "0x6ADECB0", Offset = "0x6ADDCB0", VA = "0x6ADECB0")]
	internal bool HasSelfEventInterests(EventCategory eventCategory)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABD")]
	[Address(RVA = "0x6AE4FC0", Offset = "0x6AE3FC0", VA = "0x6AE4FC0")]
	internal bool HasSelfEventInterests(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABE")]
	[Address(RVA = "0x6AE4FD0", Offset = "0x6AE3FD0", VA = "0x6AE4FD0")]
	internal bool HasTrickleDownEventInterests(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ABF")]
	[Address(RVA = "0x6AE4FF0", Offset = "0x6AE3FF0", VA = "0x6AE4FF0")]
	internal bool HasBubbleUpEventInterests(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x6AE5010", Offset = "0x6AE4010", VA = "0x6AE5010")]
	internal bool HasTrickleDownEventCallbacks(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC1")]
	[Address(RVA = "0x6AE5020", Offset = "0x6AE4020", VA = "0x6AE5020")]
	internal bool HasBubbleUpEventCallbacks(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC2")]
	[Address(RVA = "0x6AE5030", Offset = "0x6AE4030", VA = "0x6AE5030")]
	internal bool HasTrickleDownHandleEvent(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x6AE5040", Offset = "0x6AE4040", VA = "0x6AE5040")]
	internal bool HasBubbleUpHandleEvent(int eventCategories)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x6AD9AC0", Offset = "0x6AD8AC0", VA = "0x6AD9AC0")]
	internal bool ShouldClip()
	{
		return default(bool);
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x6AE51D0", Offset = "0x6AE41D0", VA = "0x6AE51D0")]
	public void Add(VisualElement child)
	{
	}

	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x6AE5290", Offset = "0x6AE4290", VA = "0x6AE5290")]
	internal void Add(VisualElement child, bool ignoreContentContainer)
	{
	}

	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x6AE52C0", Offset = "0x6AE42C0", VA = "0x6AE52C0")]
	public void Insert(int index, VisualElement element)
	{
	}

	[Token(Token = "0x6001AD7")]
	[Address(RVA = "0x6AE5360", Offset = "0x6AE4360", VA = "0x6AE5360")]
	internal void Insert(int index, VisualElement element, bool ignoreContentContainer)
	{
	}

	[Token(Token = "0x6001AD8")]
	[Address(RVA = "0x6AE5390", Offset = "0x6AE4390", VA = "0x6AE5390")]
	public void Remove(VisualElement element)
	{
	}

	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x6AE5400", Offset = "0x6AE4400", VA = "0x6AE5400")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001ADA")]
	[Address(RVA = "0x6AE5460", Offset = "0x6AE4460", VA = "0x6AE5460")]
	public VisualElement ElementAt(int index)
	{
		return null;
	}

	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x6AE5550", Offset = "0x6AE4550", VA = "0x6AE5550")]
	internal int ChildCount(bool ignoreContentContainer)
	{
		return default(int);
	}

	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x6AE5580", Offset = "0x6AE4580", VA = "0x6AE5580")]
	public int IndexOf(VisualElement element)
	{
		return default(int);
	}

	[Token(Token = "0x6001ADF")]
	[Address(RVA = "0x6AE5600", Offset = "0x6AE4600", VA = "0x6AE5600")]
	internal int IndexOf(VisualElement element, bool ignoreContentContainer)
	{
		return default(int);
	}

	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x6AE5630", Offset = "0x6AE4630", VA = "0x6AE5630")]
	internal VisualElement ElementAtTreePath(List<int> childIndexes)
	{
		return null;
	}

	[Token(Token = "0x6001AE1")]
	[Address(RVA = "0x6AE57F0", Offset = "0x6AE47F0", VA = "0x6AE57F0")]
	internal bool FindElementInTree(VisualElement element, List<int> outChildIndexes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x6AE5920", Offset = "0x6AE4920", VA = "0x6AE5920")]
	public IEnumerable<VisualElement> Children()
	{
		return null;
	}

	[Token(Token = "0x6001AE3")]
	[Address(RVA = "0x6AE59E0", Offset = "0x6AE49E0", VA = "0x6AE59E0")]
	public void BringToFront()
	{
	}

	[Token(Token = "0x6001AE4")]
	[Address(RVA = "0x6AE5A50", Offset = "0x6AE4A50", VA = "0x6AE5A50")]
	public void SendToBack()
	{
	}

	[Token(Token = "0x6001AE5")]
	[Address(RVA = "0x6AE5AC0", Offset = "0x6AE4AC0", VA = "0x6AE5AC0")]
	public void PlaceBehind(VisualElement sibling)
	{
	}

	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0x6AE5BF0", Offset = "0x6AE4BF0", VA = "0x6AE5BF0", Slot = "139")]
	internal virtual void OnChildAdded(VisualElement child)
	{
	}

	[Token(Token = "0x6001AE7")]
	[Address(RVA = "0x6AE5C00", Offset = "0x6AE4C00", VA = "0x6AE5C00", Slot = "140")]
	internal virtual void OnChildRemoved(VisualElement child)
	{
	}

	[Token(Token = "0x6001AE8")]
	[Address(RVA = "0x6AE5C10", Offset = "0x6AE4C10", VA = "0x6AE5C10")]
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
	[Address(RVA = "0x6AE5C80", Offset = "0x6AE4C80", VA = "0x6AE5C80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
	internal VisualElement GetFirstAncestorWhere(Predicate<VisualElement> predicate)
	{
		return null;
	}

	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x6ADC080", Offset = "0x6ADB080", VA = "0x6ADC080")]
	public bool Contains(VisualElement child)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x6ADE1C0", Offset = "0x6ADD1C0", VA = "0x6ADE1C0")]
	private void GatherAllChildren(List<VisualElement> elements)
	{
	}

	[Token(Token = "0x6001AEE")]
	[Address(RVA = "0x6AE5D10", Offset = "0x6AE4D10", VA = "0x6AE5D10")]
	public VisualElement FindCommonAncestor(VisualElement other)
	{
		return null;
	}

	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x6AE5EC0", Offset = "0x6AE4EC0", VA = "0x6AE5EC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal VisualElement GetRootVisualContainer(bool stopAtNearestRoot = false)
	{
		return null;
	}

	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x6AE5FC0", Offset = "0x6AE4FC0", VA = "0x6AE5FC0")]
	internal VisualElement GetNextElementDepthFirst()
	{
		return null;
	}

	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x6AE60C0", Offset = "0x6AE50C0", VA = "0x6AE60C0")]
	internal VisualElement GetPreviousElementDepthFirst()
	{
		return null;
	}

	[Token(Token = "0x6001AF2")]
	[Address(RVA = "0x6AE61A0", Offset = "0x6AE51A0", VA = "0x6AE61A0")]
	internal VisualElement RetargetElement(VisualElement retargetAgainst)
	{
		return null;
	}

	[Token(Token = "0x6001AF4")]
	[Address(RVA = "0x6ADB4B0", Offset = "0x6ADA4B0", VA = "0x6ADB4B0")]
	internal void GetPivotedMatrixWithLayout(out Matrix4x4 result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x6AE6730", Offset = "0x6AE5730", VA = "0x6AE6730")]
	internal static float Min(float a, float b, float c, float d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x6AE6740", Offset = "0x6AE5740", VA = "0x6AE6740")]
	internal static float Max(float a, float b, float c, float d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x6AE6750", Offset = "0x6AE5750", VA = "0x6AE6750")]
	internal void TransformAlignedBoundsToParentSpace(ref Bounds bounds)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x6AE6F40", Offset = "0x6AE5F40", VA = "0x6AE6F40")]
	private void TransformAlignedRectToParentSpace(ref Rect rect)
	{
	}

	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x6AE7170", Offset = "0x6AE6170", VA = "0x6AE7170")]
	internal static Rect CalculateConservativeRect(ref Matrix4x4 matrix, Rect rect)
	{
		return default(Rect);
	}

	[Token(Token = "0x6001AFE")]
	[Address(RVA = "0x6AE69D0", Offset = "0x6AE59D0", VA = "0x6AE69D0")]
	internal static Bounds CalculateConservativeBounds(ref Matrix4x4 matrix, Bounds bounds)
	{
		return default(Bounds);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x6AE7610", Offset = "0x6AE6610", VA = "0x6AE7610")]
	internal static void TransformAlignedRect(ref Matrix4x4 matrix, ref Rect rect)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B00")]
	[Address(RVA = "0x6AE7690", Offset = "0x6AE6690", VA = "0x6AE7690")]
	internal static void TransformAlignedBounds(ref Matrix4x4 matrix, ref Bounds bounds)
	{
	}

	[Token(Token = "0x6001B01")]
	[Address(RVA = "0x6AE7480", Offset = "0x6AE6480", VA = "0x6AE7480")]
	internal static void OrderMinMaxRect(ref Rect rect)
	{
	}

	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x6AE75E0", Offset = "0x6AE65E0", VA = "0x6AE75E0")]
	internal static void OrderMinMaxBounds(ref Bounds bounds)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B03")]
	[Address(RVA = "0x6AE7720", Offset = "0x6AE6720", VA = "0x6AE7720")]
	internal static Vector2 MultiplyMatrix44Point2(ref Matrix4x4 lhs, Vector2 point)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B04")]
	[Address(RVA = "0x6AE7750", Offset = "0x6AE6750", VA = "0x6AE7750")]
	internal static Vector3 MultiplyMatrix44Point2ToPoint3(ref Matrix4x4 lhs, Vector2 point)
	{
		return default(Vector3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B05")]
	[Address(RVA = "0x6AE77A0", Offset = "0x6AE67A0", VA = "0x6AE77A0")]
	internal static Vector2 MultiplyMatrix44Point3ToPoint2(ref Matrix4x4 lhs, Vector3 point)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B06")]
	[Address(RVA = "0x6AE77E0", Offset = "0x6AE67E0", VA = "0x6AE77E0")]
	internal static Vector2 MultiplyVector2(ref Matrix4x4 lhs, Vector2 vector)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6001B07")]
	[Address(RVA = "0x6ADB770", Offset = "0x6ADA770", VA = "0x6ADB770")]
	internal static void MultiplyMatrix34(ref Matrix4x4 lhs, ref Matrix4x4 rhs, out Matrix4x4 res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B08")]
	[Address(RVA = "0x6AE7800", Offset = "0x6AE6800", VA = "0x6AE7800")]
	private static void TranslateMatrix34(ref Matrix4x4 lhs, Vector3 rhs, out Matrix4x4 res)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B09")]
	[Address(RVA = "0x6AE7900", Offset = "0x6AE6900", VA = "0x6AE7900")]
	private static void TranslateMatrix34InPlace(ref Matrix4x4 lhs, Vector3 rhs)
	{
	}

	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x6AE7980", Offset = "0x6AE6980", VA = "0x6AE7980", Slot = "133")]
	private IVisualElementScheduledItem UnityEngine_002EUIElements_002EIVisualElementScheduler_002EExecute(Action<TimerState> timerUpdateEvent)
	{
		return null;
	}

	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x6AE7A30", Offset = "0x6AE6A30", VA = "0x6AE7A30", Slot = "134")]
	private IVisualElementScheduledItem UnityEngine_002EUIElements_002EIVisualElementScheduler_002EExecute(Action updateEvent)
	{
		return null;
	}

	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x6AE7B90", Offset = "0x6AE6B90", VA = "0x6AE7B90")]
	internal void AddStyleSheetPath(string sheetPath)
	{
	}

	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x6ACC120", Offset = "0x6ACB120", VA = "0x6ACC120")]
	internal StyleFloat ResolveLengthValue(Length length, bool isRow)
	{
		return default(StyleFloat);
	}

	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x6ACCC00", Offset = "0x6ACBC00", VA = "0x6ACCC00")]
	internal Vector3 ResolveTranslate()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x6ACC630", Offset = "0x6ACB630", VA = "0x6ACC630")]
	internal Vector3 ResolveTransformOrigin()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001B15")]
	[Address(RVA = "0x6AE6220", Offset = "0x6AE5220", VA = "0x6AE6220")]
	private Quaternion ResolveRotation()
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6001B16")]
	[Address(RVA = "0x6AE6300", Offset = "0x6AE5300", VA = "0x6AE6300")]
	private Vector3 ResolveScale()
	{
		return default(Vector3);
	}
}
