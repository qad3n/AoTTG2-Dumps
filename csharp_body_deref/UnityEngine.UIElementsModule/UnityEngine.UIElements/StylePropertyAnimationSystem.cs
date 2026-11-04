// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StylePropertyAnimationSystem
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;
using UnityEngine.Bindings;
using UnityEngine.Pool;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000450")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class StylePropertyAnimationSystem : IStylePropertyAnimationSystem
{
	[Token(Token = "0x2000451")]
	[Flags]
	private enum TransitionState
	{
		[Token(Token = "0x4000E71")]
		None = 0,
		[Token(Token = "0x4000E72")]
		Running = 1,
		[Token(Token = "0x4000E73")]
		Started = 2,
		[Token(Token = "0x4000E74")]
		Ended = 4,
		[Token(Token = "0x4000E75")]
		Canceled = 8
	}

	[Token(Token = "0x2000452")]
	private struct AnimationDataSet<TTimingData, TStyleData>
	{
		[Token(Token = "0x4000E76")]
		[FieldOffset(Offset = "0x0")]
		public VisualElement[] elements;

		[Token(Token = "0x4000E77")]
		[FieldOffset(Offset = "0x0")]
		public StylePropertyId[] properties;

		[Token(Token = "0x4000E78")]
		[FieldOffset(Offset = "0x0")]
		public TTimingData[] timing;

		[Token(Token = "0x4000E79")]
		[FieldOffset(Offset = "0x0")]
		public TStyleData[] style;

		[Token(Token = "0x4000E7A")]
		[FieldOffset(Offset = "0x0")]
		public int count;

		[Token(Token = "0x4000E7B")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<ElementPropertyPair, int> indices;

		[Token(Token = "0x17000907")]
		private int capacity
		{
			[Token(Token = "0x6002196")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x6002197")]
			set
			{
			}
		}

		[Token(Token = "0x6002198")]
		private void LocalInit()
		{
		}

		[Token(Token = "0x6002199")]
		public static AnimationDataSet<TTimingData, TStyleData> Create()
		{
			return default(AnimationDataSet<TTimingData, TStyleData>);
		}

		[Token(Token = "0x600219A")]
		public bool IndexOf(VisualElement ve, StylePropertyId prop, out int index)
		{
			return default(bool);
		}

		[Token(Token = "0x600219B")]
		public void Add(VisualElement owner, StylePropertyId prop, TTimingData timingData, TStyleData styleData)
		{
		}

		[Token(Token = "0x600219C")]
		public void Remove(int cancelledIndex)
		{
		}

		[Token(Token = "0x600219D")]
		public void Replace(int index, TTimingData timingData, TStyleData styleData)
		{
		}

		[Token(Token = "0x600219E")]
		public void RemoveAll(VisualElement ve)
		{
		}

		[Token(Token = "0x600219F")]
		public void RemoveAll()
		{
		}

		[Token(Token = "0x60021A0")]
		public void GetActivePropertiesForElement(VisualElement ve, List<StylePropertyId> outProperties)
		{
		}
	}

	[Token(Token = "0x2000453")]
	private struct ElementPropertyPair
	{
		[Token(Token = "0x2000454")]
		private class EqualityComparer : IEqualityComparer<ElementPropertyPair>
		{
			[Token(Token = "0x60021A3")]
			[Address(RVA = "0x310DEF0", Offset = "0x310C4F0", VA = "0x18310DEF0", Slot = "4")]
			public bool Equals(ElementPropertyPair x, ElementPropertyPair y)
			{
				return default(bool);
			}

			[Token(Token = "0x60021A4")]
			[Address(RVA = "0x310DF10", Offset = "0x310C510", VA = "0x18310DF10", Slot = "5")]
			public int GetHashCode(ElementPropertyPair obj)
			{
				return default(int);
			}

			[Token(Token = "0x60021A5")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public EqualityComparer()
			{
			}
		}

		[Token(Token = "0x4000E7C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly IEqualityComparer<ElementPropertyPair> Comparer;

		[Token(Token = "0x4000E7D")]
		[FieldOffset(Offset = "0x0")]
		public readonly VisualElement element;

		[Token(Token = "0x4000E7E")]
		[FieldOffset(Offset = "0x8")]
		public readonly StylePropertyId property;

		[Token(Token = "0x60021A1")]
		[Address(RVA = "0xCFB160", Offset = "0xCF9760", VA = "0x180CFB160")]
		public ElementPropertyPair(VisualElement element, StylePropertyId property)
		{
		}
	}

	[Token(Token = "0x2000455")]
	private abstract class Values
	{
		[Token(Token = "0x60021A6")]
		public abstract void CancelAllAnimations();

		[Token(Token = "0x60021A7")]
		public abstract void CancelAllAnimations(VisualElement ve);

		[Token(Token = "0x60021A8")]
		public abstract void CancelAnimation(VisualElement ve, StylePropertyId id);

		[Token(Token = "0x60021A9")]
		public abstract void UpdateAnimation(VisualElement ve, StylePropertyId id);

		[Token(Token = "0x60021AA")]
		public abstract void GetAllAnimations(VisualElement ve, List<StylePropertyId> outPropertyIds);

		[Token(Token = "0x60021AB")]
		public abstract void Update(double currentTime);

		[Token(Token = "0x60021AC")]
		protected abstract void UpdateValues();

		[Token(Token = "0x60021AD")]
		protected abstract void UpdateComputedStyle();

		[Token(Token = "0x60021AE")]
		protected abstract void UpdateComputedStyle(int i);

		[Token(Token = "0x60021AF")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		protected Values()
		{
		}
	}

	[Token(Token = "0x2000456")]
	private abstract class Values<T> : Values
	{
		[Token(Token = "0x2000457")]
		private class TransitionEventsFrameState
		{
			[Token(Token = "0x4000E84")]
			[FieldOffset(Offset = "0x0")]
			private static readonly UnityEngine.Pool.ObjectPool<Queue<EventBase>> k_EventQueuePool;

			[Token(Token = "0x4000E85")]
			[FieldOffset(Offset = "0x0")]
			public readonly Dictionary<ElementPropertyPair, TransitionState> elementPropertyStateDelta;

			[Token(Token = "0x4000E86")]
			[FieldOffset(Offset = "0x0")]
			public readonly Dictionary<ElementPropertyPair, Queue<EventBase>> elementPropertyQueuedEvents;

			[Token(Token = "0x4000E87")]
			[FieldOffset(Offset = "0x0")]
			public IPanel panel;

			[Token(Token = "0x4000E88")]
			[FieldOffset(Offset = "0x0")]
			private int m_ChangesCount;

			[Token(Token = "0x60021CA")]
			public static Queue<EventBase> GetPooledQueue()
			{
				return null;
			}

			[Token(Token = "0x60021CB")]
			public void RegisterChange()
			{
			}

			[Token(Token = "0x60021CC")]
			public void UnregisterChange()
			{
			}

			[Token(Token = "0x60021CD")]
			public bool StateChanged()
			{
				return default(bool);
			}

			[Token(Token = "0x60021CE")]
			public void Clear()
			{
			}

			[Token(Token = "0x60021CF")]
			public TransitionEventsFrameState()
			{
			}
		}

		[Token(Token = "0x2000459")]
		public struct TimingData
		{
			[Token(Token = "0x4000E8A")]
			[FieldOffset(Offset = "0x0")]
			public double startTime;

			[Token(Token = "0x4000E8B")]
			[FieldOffset(Offset = "0x0")]
			public float duration;

			[Token(Token = "0x4000E8C")]
			[FieldOffset(Offset = "0x0")]
			public Func<float, float> easingCurve;

			[Token(Token = "0x4000E8D")]
			[FieldOffset(Offset = "0x0")]
			public float easedProgress;

			[Token(Token = "0x4000E8E")]
			[FieldOffset(Offset = "0x0")]
			public float reversingShorteningFactor;

			[Token(Token = "0x4000E8F")]
			[FieldOffset(Offset = "0x0")]
			public bool isStarted;

			[Token(Token = "0x4000E90")]
			[FieldOffset(Offset = "0x0")]
			public float delay;
		}

		[Token(Token = "0x200045A")]
		public struct StyleData
		{
			[Token(Token = "0x4000E91")]
			[FieldOffset(Offset = "0x0")]
			public T startValue;

			[Token(Token = "0x4000E92")]
			[FieldOffset(Offset = "0x0")]
			public T endValue;

			[Token(Token = "0x4000E93")]
			[FieldOffset(Offset = "0x0")]
			public T reversingAdjustedStartValue;

			[Token(Token = "0x4000E94")]
			[FieldOffset(Offset = "0x0")]
			public T currentValue;
		}

		[Token(Token = "0x200045B")]
		public struct EmptyData
		{
			[Token(Token = "0x4000E95")]
			[FieldOffset(Offset = "0x0")]
			public static EmptyData Default;
		}

		[Token(Token = "0x4000E7F")]
		[FieldOffset(Offset = "0x0")]
		private double m_CurrentTime;

		[Token(Token = "0x4000E80")]
		[FieldOffset(Offset = "0x0")]
		private TransitionEventsFrameState m_CurrentFrameEventsState;

		[Token(Token = "0x4000E81")]
		[FieldOffset(Offset = "0x0")]
		private TransitionEventsFrameState m_NextFrameEventsState;

		[Token(Token = "0x4000E82")]
		[FieldOffset(Offset = "0x0")]
		public AnimationDataSet<TimingData, StyleData> running;

		[Token(Token = "0x4000E83")]
		[FieldOffset(Offset = "0x0")]
		public AnimationDataSet<EmptyData, T> completed;

		[Token(Token = "0x17000908")]
		public bool isEmpty
		{
			[Token(Token = "0x60021B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000909")]
		public abstract Func<T, T, bool> SameFunc
		{
			[Token(Token = "0x60021B1")]
			get;
		}

		[Token(Token = "0x60021B2")]
		protected virtual bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref T a, ref T b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021B3")]
		protected virtual T Copy(T value)
		{
			return (T)null;
		}

		[Token(Token = "0x60021B4")]
		protected Values()
		{
		}

		[Token(Token = "0x60021B5")]
		private void SwapFrameStates()
		{
		}

		[Token(Token = "0x60021B6")]
		private void QueueEvent(EventBase evt, ElementPropertyPair epp)
		{
		}

		[Token(Token = "0x60021B7")]
		private void ClearEventQueue(ElementPropertyPair epp)
		{
		}

		[Token(Token = "0x60021B8")]
		private void QueueTransitionRunEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x60021B9")]
		private void QueueTransitionStartEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x60021BA")]
		private void QueueTransitionEndEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x60021BB")]
		private void QueueTransitionCancelEvent(VisualElement ve, int runningIndex, double panelElapsed)
		{
		}

		[Token(Token = "0x60021BC")]
		private void SendTransitionCancelEvent(VisualElement ve, int runningIndex, double panelElapsed)
		{
		}

		[Token(Token = "0x60021BD")]
		public sealed override void CancelAllAnimations()
		{
		}

		[Token(Token = "0x60021BE")]
		public sealed override void CancelAllAnimations(VisualElement ve)
		{
		}

		[Token(Token = "0x60021BF")]
		public sealed override void CancelAnimation(VisualElement ve, StylePropertyId id)
		{
		}

		[Token(Token = "0x60021C0")]
		public sealed override void UpdateAnimation(VisualElement ve, StylePropertyId id)
		{
		}

		[Token(Token = "0x60021C1")]
		public sealed override void GetAllAnimations(VisualElement ve, List<StylePropertyId> outPropertyIds)
		{
		}

		[Token(Token = "0x60021C2")]
		private float ComputeReversingShorteningFactor(int oldIndex)
		{
			return default(float);
		}

		[Token(Token = "0x60021C3")]
		private float ComputeReversingDuration(float newTransitionDuration, float newReversingShorteningFactor)
		{
			return default(float);
		}

		[Token(Token = "0x60021C4")]
		private float ComputeReversingDelay(float delay, float newReversingShorteningFactor)
		{
			return default(float);
		}

		[Token(Token = "0x60021C5")]
		public bool StartTransition(VisualElement owner, StylePropertyId prop, T startValue, T endValue, float duration, float delay, Func<float, float> easingCurve, double currentTime)
		{
			return default(bool);
		}

		[Token(Token = "0x60021C6")]
		private void ForceComputedStyleEndValue(int runningIndex)
		{
		}

		[Token(Token = "0x60021C7")]
		public sealed override void Update(double currentTime)
		{
		}

		[Token(Token = "0x60021C8")]
		private void ProcessEventQueue()
		{
		}

		[Token(Token = "0x60021C9")]
		private void UpdateProgress(double currentTime)
		{
		}
	}

	[Token(Token = "0x200045C")]
	private class ValuesFloat : Values<float>
	{
		[Token(Token = "0x1700090A")]
		public override Func<float, float, bool> SameFunc
		{
			[Token(Token = "0x60021D5")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60021D6")]
		[Address(RVA = "0x311FFB0", Offset = "0x311E5B0", VA = "0x18311FFB0")]
		private static bool IsSame(float a, float b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021D7")]
		[Address(RVA = "0x311FFC0", Offset = "0x311E5C0", VA = "0x18311FFC0")]
		private static void Lerp(float a, float b, ref float result, float t)
		{
		}

		[Token(Token = "0x60021D8")]
		[Address(RVA = "0x3120130", Offset = "0x311E730", VA = "0x183120130", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60021D9")]
		[Address(RVA = "0x311FFE0", Offset = "0x311E5E0", VA = "0x18311FFE0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021DA")]
		[Address(RVA = "0x3120090", Offset = "0x311E690", VA = "0x183120090", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021DB")]
		[Address(RVA = "0x31201C0", Offset = "0x311E7C0", VA = "0x1831201C0")]
		public ValuesFloat()
		{
		}
	}

	[Token(Token = "0x200045D")]
	private class ValuesInt : Values<int>
	{
		[Token(Token = "0x1700090B")]
		public override Func<int, int, bool> SameFunc
		{
			[Token(Token = "0x60021DC")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60021DD")]
		[Address(RVA = "0x866D40", Offset = "0x865340", VA = "0x180866D40")]
		private static bool IsSame(int a, int b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021DE")]
		[Address(RVA = "0x31205B0", Offset = "0x311EBB0", VA = "0x1831205B0")]
		private static int Lerp(int a, int b, float t)
		{
			return default(int);
		}

		[Token(Token = "0x60021DF")]
		[Address(RVA = "0x31206C0", Offset = "0x311ECC0", VA = "0x1831206C0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60021E0")]
		[Address(RVA = "0x311FEC0", Offset = "0x311E4C0", VA = "0x18311FEC0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021E1")]
		[Address(RVA = "0x311FE20", Offset = "0x311E420", VA = "0x18311FE20", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021E2")]
		[Address(RVA = "0x3120880", Offset = "0x311EE80", VA = "0x183120880")]
		public ValuesInt()
		{
		}
	}

	[Token(Token = "0x200045E")]
	private class ValuesLength : Values<Length>
	{
		[Token(Token = "0x1700090C")]
		public override Func<Length, Length, bool> SameFunc
		{
			[Token(Token = "0x60021E3")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60021E4")]
		[Address(RVA = "0x3120960", Offset = "0x311EF60", VA = "0x183120960")]
		private static bool IsSame(Length a, Length b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021E5")]
		[Address(RVA = "0x3120920", Offset = "0x311EF20", VA = "0x183120920", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref Length a, ref Length b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021E6")]
		[Address(RVA = "0x31209A0", Offset = "0x311EFA0", VA = "0x1831209A0")]
		internal static Length Lerp(Length a, Length b, float t)
		{
			return default(Length);
		}

		[Token(Token = "0x60021E7")]
		[Address(RVA = "0x3120B50", Offset = "0x311F150", VA = "0x183120B50", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60021E8")]
		[Address(RVA = "0x3120A00", Offset = "0x311F000", VA = "0x183120A00", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021E9")]
		[Address(RVA = "0x3120AB0", Offset = "0x311F0B0", VA = "0x183120AB0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021EA")]
		[Address(RVA = "0x3120C40", Offset = "0x311F240", VA = "0x183120C40")]
		public ValuesLength()
		{
		}
	}

	[Token(Token = "0x200045F")]
	private class ValuesColor : Values<Color>
	{
		[Token(Token = "0x1700090D")]
		public override Func<Color, Color, bool> SameFunc
		{
			[Token(Token = "0x60021EB")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60021EC")]
		[Address(RVA = "0x311F9E0", Offset = "0x311DFE0", VA = "0x18311F9E0")]
		private static bool IsSame(Color c, Color d)
		{
			return default(bool);
		}

		[Token(Token = "0x60021ED")]
		[Address(RVA = "0x311FA60", Offset = "0x311E060", VA = "0x18311FA60")]
		private static Color Lerp(Color a, Color b, float t)
		{
			return default(Color);
		}

		[Token(Token = "0x60021EE")]
		[Address(RVA = "0x311FC60", Offset = "0x311E260", VA = "0x18311FC60", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60021EF")]
		[Address(RVA = "0x311FB90", Offset = "0x311E190", VA = "0x18311FB90", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021F0")]
		[Address(RVA = "0x311FAE0", Offset = "0x311E0E0", VA = "0x18311FAE0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021F1")]
		[Address(RVA = "0x311FD80", Offset = "0x311E380", VA = "0x18311FD80")]
		public ValuesColor()
		{
		}
	}

	[Token(Token = "0x2000460")]
	private abstract class ValuesDiscrete<T> : Values<T>
	{
		[Token(Token = "0x1700090E")]
		public override Func<T, T, bool> SameFunc
		{
			[Token(Token = "0x60021F2")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60021F3")]
		private static bool IsSame(T a, T b)
		{
			return default(bool);
		}

		[Token(Token = "0x60021F4")]
		private static T Lerp(T a, T b, float t)
		{
			return (T)null;
		}

		[Token(Token = "0x60021F5")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60021F6")]
		protected ValuesDiscrete()
		{
		}
	}

	[Token(Token = "0x2000461")]
	private class ValuesEnum : ValuesDiscrete<int>
	{
		[Token(Token = "0x60021F7")]
		[Address(RVA = "0x311FEC0", Offset = "0x311E4C0", VA = "0x18311FEC0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021F8")]
		[Address(RVA = "0x311FE20", Offset = "0x311E420", VA = "0x18311FE20", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021F9")]
		[Address(RVA = "0x311FF70", Offset = "0x311E570", VA = "0x18311FF70")]
		public ValuesEnum()
		{
		}
	}

	[Token(Token = "0x2000462")]
	private class ValuesBackground : ValuesDiscrete<Background>
	{
		[Token(Token = "0x60021FA")]
		[Address(RVA = "0x311F8A0", Offset = "0x311DEA0", VA = "0x18311F8A0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021FB")]
		[Address(RVA = "0x311F7D0", Offset = "0x311DDD0", VA = "0x18311F7D0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021FC")]
		[Address(RVA = "0x311F9A0", Offset = "0x311DFA0", VA = "0x18311F9A0")]
		public ValuesBackground()
		{
		}
	}

	[Token(Token = "0x2000463")]
	private class ValuesFontDefinition : ValuesDiscrete<FontDefinition>
	{
		[Token(Token = "0x60021FD")]
		[Address(RVA = "0x3120310", Offset = "0x311E910", VA = "0x183120310", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60021FE")]
		[Address(RVA = "0x3120260", Offset = "0x311E860", VA = "0x183120260", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60021FF")]
		[Address(RVA = "0x31203E0", Offset = "0x311E9E0", VA = "0x1831203E0")]
		public ValuesFontDefinition()
		{
		}
	}

	[Token(Token = "0x2000464")]
	private class ValuesFont : ValuesDiscrete<Font>
	{
		[Token(Token = "0x6002200")]
		[Address(RVA = "0x31204C0", Offset = "0x311EAC0", VA = "0x1831204C0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002201")]
		[Address(RVA = "0x3120420", Offset = "0x311EA20", VA = "0x183120420", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002202")]
		[Address(RVA = "0x3120570", Offset = "0x311EB70", VA = "0x183120570")]
		public ValuesFont()
		{
		}
	}

	[Token(Token = "0x2000465")]
	private class ValuesTextShadow : Values<TextShadow>
	{
		[Token(Token = "0x1700090F")]
		public override Func<TextShadow, TextShadow, bool> SameFunc
		{
			[Token(Token = "0x6002203")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002204")]
		[Address(RVA = "0x3123E90", Offset = "0x3122490", VA = "0x183123E90")]
		private static bool IsSame(TextShadow a, TextShadow b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002205")]
		[Address(RVA = "0x3123ED0", Offset = "0x31224D0", VA = "0x183123ED0")]
		private static TextShadow Lerp(TextShadow a, TextShadow b, float t)
		{
			return default(TextShadow);
		}

		[Token(Token = "0x6002206")]
		[Address(RVA = "0x3124110", Offset = "0x3122710", VA = "0x183124110", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002207")]
		[Address(RVA = "0x3124010", Offset = "0x3122610", VA = "0x183124010", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002208")]
		[Address(RVA = "0x3123F40", Offset = "0x3122540", VA = "0x183123F40", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002209")]
		[Address(RVA = "0x3124220", Offset = "0x3122820", VA = "0x183124220")]
		public ValuesTextShadow()
		{
		}
	}

	[Token(Token = "0x2000466")]
	private class ValuesScale : Values<Scale>
	{
		[Token(Token = "0x17000910")]
		public override Func<Scale, Scale, bool> SameFunc
		{
			[Token(Token = "0x600220A")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600220B")]
		[Address(RVA = "0x3123AA0", Offset = "0x31220A0", VA = "0x183123AA0")]
		private static bool IsSame(Scale a, Scale b)
		{
			return default(bool);
		}

		[Token(Token = "0x600220C")]
		[Address(RVA = "0x3123C00", Offset = "0x3122200", VA = "0x183123C00", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600220D")]
		[Address(RVA = "0x3123B50", Offset = "0x3122150", VA = "0x183123B50", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600220E")]
		[Address(RVA = "0x3123AF0", Offset = "0x31220F0", VA = "0x183123AF0")]
		private static Scale Lerp(Scale a, Scale b, float t)
		{
			return default(Scale);
		}

		[Token(Token = "0x600220F")]
		[Address(RVA = "0x3123CD0", Offset = "0x31222D0", VA = "0x183123CD0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002210")]
		[Address(RVA = "0x3123DF0", Offset = "0x31223F0", VA = "0x183123DF0")]
		public ValuesScale()
		{
		}
	}

	[Token(Token = "0x2000467")]
	private class ValuesRotate : Values<Rotate>
	{
		[Token(Token = "0x17000911")]
		public override Func<Rotate, Rotate, bool> SameFunc
		{
			[Token(Token = "0x6002211")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002212")]
		[Address(RVA = "0x31234C0", Offset = "0x3121AC0", VA = "0x1831234C0")]
		private static bool IsSame(Rotate a, Rotate b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002213")]
		[Address(RVA = "0x3123740", Offset = "0x3121D40", VA = "0x183123740", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002214")]
		[Address(RVA = "0x3123670", Offset = "0x3121C70", VA = "0x183123670", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002215")]
		[Address(RVA = "0x31235A0", Offset = "0x3121BA0", VA = "0x1831235A0")]
		private static Rotate Lerp(Rotate a, Rotate b, float t)
		{
			return default(Rotate);
		}

		[Token(Token = "0x6002216")]
		[Address(RVA = "0x3123840", Offset = "0x3121E40", VA = "0x183123840", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002217")]
		[Address(RVA = "0x3123A00", Offset = "0x3122000", VA = "0x183123A00")]
		public ValuesRotate()
		{
		}
	}

	[Token(Token = "0x2000468")]
	private class ValuesRatio : Values<Ratio>
	{
		[Token(Token = "0x17000912")]
		public override Func<Ratio, Ratio, bool> SameFunc
		{
			[Token(Token = "0x6002218")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002219")]
		[Address(RVA = "0x31105C0", Offset = "0x310EBC0", VA = "0x1831105C0")]
		private static bool IsSame(Ratio a, Ratio b)
		{
			return default(bool);
		}

		[Token(Token = "0x600221A")]
		[Address(RVA = "0x31230D0", Offset = "0x31216D0", VA = "0x1831230D0", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref Ratio a, ref Ratio b)
		{
			return default(bool);
		}

		[Token(Token = "0x600221B")]
		[Address(RVA = "0x3123240", Offset = "0x3121840", VA = "0x183123240", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600221C")]
		[Address(RVA = "0x31232F0", Offset = "0x31218F0", VA = "0x1831232F0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600221D")]
		[Address(RVA = "0x3123220", Offset = "0x3121820", VA = "0x183123220")]
		private static Ratio Lerp(Ratio a, Ratio b, float t)
		{
			return default(Ratio);
		}

		[Token(Token = "0x600221E")]
		[Address(RVA = "0x3123390", Offset = "0x3121990", VA = "0x183123390", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x600221F")]
		[Address(RVA = "0x3123420", Offset = "0x3121A20", VA = "0x183123420")]
		public ValuesRatio()
		{
		}
	}

	[Token(Token = "0x2000469")]
	private class ValuesTranslate : Values<Translate>
	{
		[Token(Token = "0x17000913")]
		public override Func<Translate, Translate, bool> SameFunc
		{
			[Token(Token = "0x6002220")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002221")]
		[Address(RVA = "0x3124900", Offset = "0x3122F00", VA = "0x183124900")]
		private static bool IsSame(Translate a, Translate b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002222")]
		[Address(RVA = "0x31248D0", Offset = "0x3122ED0", VA = "0x1831248D0", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref Translate a, ref Translate b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002223")]
		[Address(RVA = "0x3124B80", Offset = "0x3123180", VA = "0x183124B80", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002224")]
		[Address(RVA = "0x3124AB0", Offset = "0x31230B0", VA = "0x183124AB0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002225")]
		[Address(RVA = "0x31249B0", Offset = "0x3122FB0", VA = "0x1831249B0")]
		private static Translate Lerp(Translate a, Translate b, float t)
		{
			return default(Translate);
		}

		[Token(Token = "0x6002226")]
		[Address(RVA = "0x3124C80", Offset = "0x3123280", VA = "0x183124C80", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002227")]
		[Address(RVA = "0x3124EA0", Offset = "0x31234A0", VA = "0x183124EA0")]
		public ValuesTranslate()
		{
		}
	}

	[Token(Token = "0x200046A")]
	private class ValuesTransformOrigin : Values<TransformOrigin>
	{
		[Token(Token = "0x17000914")]
		public override Func<TransformOrigin, TransformOrigin, bool> SameFunc
		{
			[Token(Token = "0x6002228")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002229")]
		[Address(RVA = "0x31242F0", Offset = "0x31228F0", VA = "0x1831242F0")]
		private static bool IsSame(TransformOrigin a, TransformOrigin b)
		{
			return default(bool);
		}

		[Token(Token = "0x600222A")]
		[Address(RVA = "0x31242C0", Offset = "0x31228C0", VA = "0x1831242C0", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref TransformOrigin a, ref TransformOrigin b)
		{
			return default(bool);
		}

		[Token(Token = "0x600222B")]
		[Address(RVA = "0x3124540", Offset = "0x3122B40", VA = "0x183124540", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600222C")]
		[Address(RVA = "0x3124480", Offset = "0x3122A80", VA = "0x183124480", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600222D")]
		[Address(RVA = "0x3124390", Offset = "0x3122990", VA = "0x183124390")]
		private static TransformOrigin Lerp(TransformOrigin a, TransformOrigin b, float t)
		{
			return default(TransformOrigin);
		}

		[Token(Token = "0x600222E")]
		[Address(RVA = "0x3124630", Offset = "0x3122C30", VA = "0x183124630", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x600222F")]
		[Address(RVA = "0x3124830", Offset = "0x3122E30", VA = "0x183124830")]
		public ValuesTransformOrigin()
		{
		}
	}

	[Token(Token = "0x200046B")]
	private class ValuesBackgroundPosition : ValuesDiscrete<BackgroundPosition>
	{
		[Token(Token = "0x6002230")]
		[Address(RVA = "0x311EE50", Offset = "0x311D450", VA = "0x18311EE50", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002231")]
		[Address(RVA = "0x311EF40", Offset = "0x311D540", VA = "0x18311EF40", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002232")]
		[Address(RVA = "0x311F010", Offset = "0x311D610", VA = "0x18311F010")]
		public ValuesBackgroundPosition()
		{
		}
	}

	[Token(Token = "0x200046C")]
	private class ValuesBackgroundRepeat : ValuesDiscrete<BackgroundRepeat>
	{
		[Token(Token = "0x6002233")]
		[Address(RVA = "0x311F0F0", Offset = "0x311D6F0", VA = "0x18311F0F0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002234")]
		[Address(RVA = "0x311F050", Offset = "0x311D650", VA = "0x18311F050", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002235")]
		[Address(RVA = "0x311F1A0", Offset = "0x311D7A0", VA = "0x18311F1A0")]
		public ValuesBackgroundRepeat()
		{
		}
	}

	[Token(Token = "0x200046D")]
	private class ValuesBackgroundSize : Values<BackgroundSize>
	{
		[Token(Token = "0x17000915")]
		public override Func<BackgroundSize, BackgroundSize, bool> SameFunc
		{
			[Token(Token = "0x6002236")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002237")]
		[Address(RVA = "0x311F210", Offset = "0x311D810", VA = "0x18311F210")]
		private static bool IsSame(BackgroundSize a, BackgroundSize b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002238")]
		[Address(RVA = "0x311F1E0", Offset = "0x311D7E0", VA = "0x18311F1E0", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref BackgroundSize a, ref BackgroundSize b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002239")]
		[Address(RVA = "0x311F440", Offset = "0x311DA40", VA = "0x18311F440", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600223A")]
		[Address(RVA = "0x311F380", Offset = "0x311D980", VA = "0x18311F380", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600223B")]
		[Address(RVA = "0x311F250", Offset = "0x311D850", VA = "0x18311F250")]
		private static BackgroundSize Lerp(BackgroundSize a, BackgroundSize b, float t)
		{
			return default(BackgroundSize);
		}

		[Token(Token = "0x600223C")]
		[Address(RVA = "0x311F530", Offset = "0x311DB30", VA = "0x18311F530", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x600223D")]
		[Address(RVA = "0x311F730", Offset = "0x311DD30", VA = "0x18311F730")]
		public ValuesBackgroundSize()
		{
		}
	}

	[Token(Token = "0x200046E")]
	private class ValuesListFilterFunction : Values<List<FilterFunction>>
	{
		[Token(Token = "0x17000916")]
		public override Func<List<FilterFunction>, List<FilterFunction>, bool> SameFunc
		{
			[Token(Token = "0x600223F")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600223E")]
		[Address(RVA = "0x3120F50", Offset = "0x311F550", VA = "0x183120F50", Slot = "15")]
		protected override List<FilterFunction> Copy(List<FilterFunction> value)
		{
			return null;
		}

		[Token(Token = "0x6002240")]
		[Address(RVA = "0x3121200", Offset = "0x311F800", VA = "0x183121200")]
		private static bool IsSame(List<FilterFunction> a, List<FilterFunction> b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002241")]
		[Address(RVA = "0x3120D80", Offset = "0x311F380", VA = "0x183120D80", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref List<FilterFunction> a, ref List<FilterFunction> b)
		{
			return default(bool);
		}

		[Token(Token = "0x6002242")]
		[Address(RVA = "0x3120CE0", Offset = "0x311F2E0", VA = "0x183120CE0")]
		private static bool AreFilterDefinitionsCompatible(FilterFunctionDefinition filterDef1, FilterFunctionDefinition filterDef2)
		{
			return default(bool);
		}

		[Token(Token = "0x6002243")]
		[Address(RVA = "0x3121B80", Offset = "0x3120180", VA = "0x183121B80", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6002244")]
		[Address(RVA = "0x3121AE0", Offset = "0x31200E0", VA = "0x183121AE0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002245")]
		[Address(RVA = "0x3121410", Offset = "0x311FA10", VA = "0x183121410")]
		private static FilterParameter LerpFilterParameters(FilterParameter a, FilterParameter b, float t)
		{
			return default(FilterParameter);
		}

		[Token(Token = "0x6002246")]
		[Address(RVA = "0x3121560", Offset = "0x311FB60", VA = "0x183121560")]
		private static void Lerp(List<FilterFunction> a, List<FilterFunction> b, ref List<FilterFunction> result, float t)
		{
		}

		[Token(Token = "0x6002247")]
		[Address(RVA = "0x3120FC0", Offset = "0x311F5C0", VA = "0x183120FC0")]
		private static FilterFunction GetFunctionOrDefault(ref List<FilterFunction> srcList, ref List<FilterFunction> refList, int index)
		{
			return default(FilterFunction);
		}

		[Token(Token = "0x6002248")]
		[Address(RVA = "0x3121C30", Offset = "0x3120230", VA = "0x183121C30", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002249")]
		[Address(RVA = "0x3121CC0", Offset = "0x31202C0", VA = "0x183121CC0")]
		public ValuesListFilterFunction()
		{
		}
	}

	[Token(Token = "0x200046F")]
	private class ValuesMaterialDefinition : Values<MaterialDefinition>
	{
		[Token(Token = "0x17000917")]
		public override Func<MaterialDefinition, MaterialDefinition, bool> SameFunc
		{
			[Token(Token = "0x600224B")]
			[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600224A")]
		[Address(RVA = "0x3121FB0", Offset = "0x31205B0", VA = "0x183121FB0", Slot = "15")]
		protected override MaterialDefinition Copy(MaterialDefinition value)
		{
			return default(MaterialDefinition);
		}

		[Token(Token = "0x600224C")]
		[Address(RVA = "0x3122200", Offset = "0x3120800", VA = "0x183122200")]
		private static bool IsSame(MaterialDefinition a, MaterialDefinition b)
		{
			return default(bool);
		}

		[Token(Token = "0x600224D")]
		[Address(RVA = "0x3121D60", Offset = "0x3120360", VA = "0x183121D60", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref MaterialDefinition a, ref MaterialDefinition b)
		{
			return default(bool);
		}

		[Token(Token = "0x600224E")]
		[Address(RVA = "0x3122E10", Offset = "0x3121410", VA = "0x183122E10", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600224F")]
		[Address(RVA = "0x3122EE0", Offset = "0x31214E0", VA = "0x183122EE0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6002250")]
		[Address(RVA = "0x3122460", Offset = "0x3120A60", VA = "0x183122460")]
		private static MaterialPropertyValue LerpPropertyValues(MaterialPropertyValue a, MaterialPropertyValue b, float t)
		{
			return default(MaterialPropertyValue);
		}

		[Token(Token = "0x6002251")]
		[Address(RVA = "0x3122080", Offset = "0x3120680", VA = "0x183122080")]
		private static MaterialPropertyValue GetValueOrDefault(List<MaterialPropertyValue> srcList, List<MaterialPropertyValue> refList, int index)
		{
			return default(MaterialPropertyValue);
		}

		[Token(Token = "0x6002252")]
		[Address(RVA = "0x3122600", Offset = "0x3120C00", VA = "0x183122600")]
		private static void Lerp(MaterialDefinition a, MaterialDefinition b, ref MaterialDefinition result, float t)
		{
		}

		[Token(Token = "0x6002253")]
		[Address(RVA = "0x3122F90", Offset = "0x3121590", VA = "0x183122F90", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6002254")]
		[Address(RVA = "0x3123030", Offset = "0x3121630", VA = "0x183123030")]
		public ValuesMaterialDefinition()
		{
		}
	}

	[Token(Token = "0x4000E5A")]
	[FieldOffset(Offset = "0x10")]
	private double m_CurrentTime;

	[Token(Token = "0x4000E5B")]
	[FieldOffset(Offset = "0x18")]
	private ValuesFloat m_Floats;

	[Token(Token = "0x4000E5C")]
	[FieldOffset(Offset = "0x20")]
	private ValuesInt m_Ints;

	[Token(Token = "0x4000E5D")]
	[FieldOffset(Offset = "0x28")]
	private ValuesLength m_Lengths;

	[Token(Token = "0x4000E5E")]
	[FieldOffset(Offset = "0x30")]
	private ValuesColor m_Colors;

	[Token(Token = "0x4000E5F")]
	[FieldOffset(Offset = "0x38")]
	private ValuesEnum m_Enums;

	[Token(Token = "0x4000E60")]
	[FieldOffset(Offset = "0x40")]
	private ValuesBackground m_Backgrounds;

	[Token(Token = "0x4000E61")]
	[FieldOffset(Offset = "0x48")]
	private ValuesFontDefinition m_FontDefinitions;

	[Token(Token = "0x4000E62")]
	[FieldOffset(Offset = "0x50")]
	private ValuesFont m_Fonts;

	[Token(Token = "0x4000E63")]
	[FieldOffset(Offset = "0x58")]
	private ValuesTextShadow m_TextShadows;

	[Token(Token = "0x4000E64")]
	[FieldOffset(Offset = "0x60")]
	private ValuesScale m_Scale;

	[Token(Token = "0x4000E65")]
	[FieldOffset(Offset = "0x68")]
	private ValuesRotate m_Rotate;

	[Token(Token = "0x4000E66")]
	[FieldOffset(Offset = "0x70")]
	private ValuesRatio m_Ratio;

	[Token(Token = "0x4000E67")]
	[FieldOffset(Offset = "0x78")]
	private ValuesTranslate m_Translate;

	[Token(Token = "0x4000E68")]
	[FieldOffset(Offset = "0x80")]
	private ValuesTransformOrigin m_TransformOrigin;

	[Token(Token = "0x4000E69")]
	[FieldOffset(Offset = "0x88")]
	private ValuesBackgroundPosition m_BackgroundPosition;

	[Token(Token = "0x4000E6A")]
	[FieldOffset(Offset = "0x90")]
	private ValuesBackgroundRepeat m_BackgroundRepeat;

	[Token(Token = "0x4000E6B")]
	[FieldOffset(Offset = "0x98")]
	private ValuesBackgroundSize m_BackgroundSize;

	[Token(Token = "0x4000E6C")]
	[FieldOffset(Offset = "0xA0")]
	private ValuesListFilterFunction m_FilterFunctions;

	[Token(Token = "0x4000E6D")]
	[FieldOffset(Offset = "0xA8")]
	private ValuesMaterialDefinition m_MaterialDefinition;

	[Token(Token = "0x4000E6E")]
	[FieldOffset(Offset = "0xB0")]
	private readonly List<Values> m_AllValues;

	[Token(Token = "0x4000E6F")]
	[FieldOffset(Offset = "0xB8")]
	private readonly Dictionary<StylePropertyId, Values> m_PropertyToValues;

	[Token(Token = "0x6002178")]
	[Address(RVA = "0x3115FB0", Offset = "0x31145B0", VA = "0x183115FB0")]
	public StylePropertyAnimationSystem(BaseVisualElementPanel p)
	{
	}

	[Token(Token = "0x6002179")]
	private T GetOrCreate<T>(ref T values) where T : new()
	{
		return (T)null;
	}

	[Token(Token = "0x600217A")]
	private bool StartTransition<T>(VisualElement owner, StylePropertyId prop, T startValue, T endValue, int durationMs, int delayMs, Func<float, float> easingCurve, Values<T> values)
	{
		return default(bool);
	}

	[Token(Token = "0x600217B")]
	[Address(RVA = "0x3115990", Offset = "0x3113F90", VA = "0x183115990", Slot = "4")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, float startValue, float endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600217C")]
	[Address(RVA = "0x3115630", Offset = "0x3113C30", VA = "0x183115630", Slot = "5")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, int startValue, int endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600217D")]
	[Address(RVA = "0x31153D0", Offset = "0x31139D0", VA = "0x1831153D0", Slot = "6")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Length startValue, Length endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600217E")]
	[Address(RVA = "0x3115480", Offset = "0x3113A80", VA = "0x183115480", Slot = "7")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Color startValue, Color endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600217F")]
	[Address(RVA = "0x3114F10", Offset = "0x3113510", VA = "0x183114F10", Slot = "8")]
	public bool StartTransitionEnum(VisualElement owner, StylePropertyId prop, int startValue, int endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002180")]
	[Address(RVA = "0x3115150", Offset = "0x3113750", VA = "0x183115150", Slot = "9")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Background startValue, Background endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002181")]
	[Address(RVA = "0x3115300", Offset = "0x3113900", VA = "0x183115300", Slot = "10")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, FontDefinition startValue, FontDefinition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002182")]
	[Address(RVA = "0x3115B30", Offset = "0x3114130", VA = "0x183115B30", Slot = "11")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Font startValue, Font endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002183")]
	[Address(RVA = "0x31158B0", Offset = "0x3113EB0", VA = "0x1831158B0", Slot = "12")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, TextShadow startValue, TextShadow endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002184")]
	[Address(RVA = "0x3115A60", Offset = "0x3114060", VA = "0x183115A60", Slot = "13")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Scale startValue, Scale endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002185")]
	[Address(RVA = "0x31157C0", Offset = "0x3113DC0", VA = "0x1831157C0", Slot = "16")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Rotate startValue, Rotate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002186")]
	[Address(RVA = "0x3115BE0", Offset = "0x31141E0", VA = "0x183115BE0", Slot = "15")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Translate startValue, Translate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002187")]
	[Address(RVA = "0x3115D80", Offset = "0x3114380", VA = "0x183115D80", Slot = "17")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Ratio startValue, Ratio endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002188")]
	[Address(RVA = "0x3115550", Offset = "0x3113B50", VA = "0x183115550", Slot = "14")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, TransformOrigin startValue, TransformOrigin endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002189")]
	[Address(RVA = "0x3115070", Offset = "0x3113670", VA = "0x183115070", Slot = "18")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundPosition startValue, BackgroundPosition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600218A")]
	[Address(RVA = "0x3115CD0", Offset = "0x31142D0", VA = "0x183115CD0", Slot = "19")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundRepeat startValue, BackgroundRepeat endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600218B")]
	[Address(RVA = "0x31156E0", Offset = "0x3113CE0", VA = "0x1831156E0", Slot = "20")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundSize startValue, BackgroundSize endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600218C")]
	[Address(RVA = "0x3114FC0", Offset = "0x31135C0", VA = "0x183114FC0", Slot = "21")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, List<FilterFunction> startValue, List<FilterFunction> endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600218D")]
	[Address(RVA = "0x3115230", Offset = "0x3113830", VA = "0x183115230", Slot = "22")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, MaterialDefinition startValue, MaterialDefinition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600218E")]
	[Address(RVA = "0x3114A20", Offset = "0x3113020", VA = "0x183114A20", Slot = "23")]
	public void CancelAllAnimations()
	{
	}

	[Token(Token = "0x600218F")]
	[Address(RVA = "0x3114B40", Offset = "0x3113140", VA = "0x183114B40", Slot = "24")]
	public void CancelAllAnimations(VisualElement owner)
	{
	}

	[Token(Token = "0x6002190")]
	[Address(RVA = "0x3114D20", Offset = "0x3113320", VA = "0x183114D20", Slot = "25")]
	public void CancelAnimation(VisualElement owner, StylePropertyId id)
	{
	}

	[Token(Token = "0x6002191")]
	[Address(RVA = "0x3115E50", Offset = "0x3114450", VA = "0x183115E50", Slot = "26")]
	public void UpdateAnimation(VisualElement owner, StylePropertyId id)
	{
	}

	[Token(Token = "0x6002192")]
	[Address(RVA = "0x3114DD0", Offset = "0x31133D0", VA = "0x183114DD0", Slot = "27")]
	public void GetAllAnimations(VisualElement owner, List<StylePropertyId> propertyIds)
	{
	}

	[Token(Token = "0x6002193")]
	private void UpdateTracking<T>(Values<T> values)
	{
	}

	[Token(Token = "0x6002194")]
	[Address(RVA = "0x3114DC0", Offset = "0x31133C0", VA = "0x183114DC0")]
	private double CurrentTimeSeconds()
	{
		return default(double);
	}

	[Token(Token = "0x6002195")]
	[Address(RVA = "0x3115EF0", Offset = "0x31144F0", VA = "0x183115EF0", Slot = "28")]
	public void Update(double updateTime)
	{
	}
}
