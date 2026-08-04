// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StylePropertyAnimationSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;
using UnityEngine.Pool;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003AB")]
internal class StylePropertyAnimationSystem : IStylePropertyAnimationSystem
{
	[Token(Token = "0x20003AC")]
	[Flags]
	private enum TransitionState
	{
		[Token(Token = "0x4000B13")]
		None = 0,
		[Token(Token = "0x4000B14")]
		Running = 1,
		[Token(Token = "0x4000B15")]
		Started = 2,
		[Token(Token = "0x4000B16")]
		Ended = 4,
		[Token(Token = "0x4000B17")]
		Canceled = 8
	}

	[Token(Token = "0x20003AD")]
	private struct AnimationDataSet<TTimingData, TStyleData>
	{
		[Token(Token = "0x4000B18")]
		[FieldOffset(Offset = "0x0")]
		public VisualElement[] elements;

		[Token(Token = "0x4000B19")]
		[FieldOffset(Offset = "0x0")]
		public StylePropertyId[] properties;

		[Token(Token = "0x4000B1A")]
		[FieldOffset(Offset = "0x0")]
		public TTimingData[] timing;

		[Token(Token = "0x4000B1B")]
		[FieldOffset(Offset = "0x0")]
		public TStyleData[] style;

		[Token(Token = "0x4000B1C")]
		[FieldOffset(Offset = "0x0")]
		public int count;

		[Token(Token = "0x4000B1D")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<ElementPropertyPair, int> indices;

		[Token(Token = "0x17000667")]
		private int capacity
		{
			[Token(Token = "0x600177C")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x600177D")]
			set
			{
			}
		}

		[Token(Token = "0x600177E")]
		private void LocalInit()
		{
		}

		[Token(Token = "0x600177F")]
		public static AnimationDataSet<TTimingData, TStyleData> Create()
		{
			return default(AnimationDataSet<TTimingData, TStyleData>);
		}

		[Token(Token = "0x6001780")]
		public bool IndexOf(VisualElement ve, StylePropertyId prop, out int index)
		{
			return default(bool);
		}

		[Token(Token = "0x6001781")]
		public void Add(VisualElement owner, StylePropertyId prop, TTimingData timingData, TStyleData styleData)
		{
		}

		[Token(Token = "0x6001782")]
		public void Remove(int cancelledIndex)
		{
		}

		[Token(Token = "0x6001783")]
		public void Replace(int index, TTimingData timingData, TStyleData styleData)
		{
		}

		[Token(Token = "0x6001784")]
		public void RemoveAll(VisualElement ve)
		{
		}

		[Token(Token = "0x6001785")]
		public void RemoveAll()
		{
		}

		[Token(Token = "0x6001786")]
		public void GetActivePropertiesForElement(VisualElement ve, List<StylePropertyId> outProperties)
		{
		}
	}

	[Token(Token = "0x20003AE")]
	private struct ElementPropertyPair
	{
		[Token(Token = "0x20003AF")]
		private class EqualityComparer : IEqualityComparer<ElementPropertyPair>
		{
			[Token(Token = "0x6001789")]
			[Address(RVA = "0x50B3840", Offset = "0x50B3840", VA = "0x50B3840", Slot = "4")]
			public bool Equals(ElementPropertyPair x, ElementPropertyPair y)
			{
				return default(bool);
			}

			[Token(Token = "0x600178A")]
			[Address(RVA = "0x50B3850", Offset = "0x50B3850", VA = "0x50B3850", Slot = "5")]
			public int GetHashCode(ElementPropertyPair obj)
			{
				return default(int);
			}

			[Token(Token = "0x600178B")]
			[Address(RVA = "0x50B3830", Offset = "0x50B3830", VA = "0x50B3830")]
			public EqualityComparer()
			{
			}
		}

		[Token(Token = "0x4000B1E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly IEqualityComparer<ElementPropertyPair> Comparer;

		[Token(Token = "0x4000B1F")]
		[FieldOffset(Offset = "0x0")]
		public readonly VisualElement element;

		[Token(Token = "0x4000B20")]
		[FieldOffset(Offset = "0x8")]
		public readonly StylePropertyId property;

		[Token(Token = "0x6001787")]
		[Address(RVA = "0x50B37A0", Offset = "0x50B37A0", VA = "0x50B37A0")]
		public ElementPropertyPair(VisualElement element, StylePropertyId property)
		{
		}
	}

	[Token(Token = "0x20003B0")]
	private abstract class Values
	{
		[Token(Token = "0x600178C")]
		public abstract void CancelAllAnimations();

		[Token(Token = "0x600178D")]
		public abstract void CancelAllAnimations(VisualElement ve);

		[Token(Token = "0x600178E")]
		public abstract void CancelAnimation(VisualElement ve, StylePropertyId id);

		[Token(Token = "0x600178F")]
		public abstract void UpdateAnimation(VisualElement ve, StylePropertyId id);

		[Token(Token = "0x6001790")]
		public abstract void GetAllAnimations(VisualElement ve, List<StylePropertyId> outPropertyIds);

		[Token(Token = "0x6001791")]
		public abstract void Update(long currentTimeMs);

		[Token(Token = "0x6001792")]
		protected abstract void UpdateValues();

		[Token(Token = "0x6001793")]
		protected abstract void UpdateComputedStyle();

		[Token(Token = "0x6001794")]
		protected abstract void UpdateComputedStyle(int i);

		[Token(Token = "0x6001795")]
		[Address(RVA = "0x50B3880", Offset = "0x50B3880", VA = "0x50B3880")]
		protected Values()
		{
		}
	}

	[Token(Token = "0x20003B1")]
	private abstract class Values<T> : Values
	{
		[Token(Token = "0x20003B2")]
		private class TransitionEventsFrameState
		{
			[Token(Token = "0x4000B26")]
			[FieldOffset(Offset = "0x0")]
			private static readonly UnityEngine.Pool.ObjectPool<Queue<EventBase>> k_EventQueuePool;

			[Token(Token = "0x4000B27")]
			[FieldOffset(Offset = "0x0")]
			public readonly Dictionary<ElementPropertyPair, TransitionState> elementPropertyStateDelta;

			[Token(Token = "0x4000B28")]
			[FieldOffset(Offset = "0x0")]
			public readonly Dictionary<ElementPropertyPair, Queue<EventBase>> elementPropertyQueuedEvents;

			[Token(Token = "0x4000B29")]
			[FieldOffset(Offset = "0x0")]
			public IPanel panel;

			[Token(Token = "0x4000B2A")]
			[FieldOffset(Offset = "0x0")]
			private int m_ChangesCount;

			[Token(Token = "0x60017AF")]
			public static Queue<EventBase> GetPooledQueue()
			{
				return null;
			}

			[Token(Token = "0x60017B0")]
			public void RegisterChange()
			{
			}

			[Token(Token = "0x60017B1")]
			public void UnregisterChange()
			{
			}

			[Token(Token = "0x60017B2")]
			public bool StateChanged()
			{
				return default(bool);
			}

			[Token(Token = "0x60017B3")]
			public void Clear()
			{
			}

			[Token(Token = "0x60017B4")]
			public TransitionEventsFrameState()
			{
			}
		}

		[Token(Token = "0x20003B4")]
		public struct TimingData
		{
			[Token(Token = "0x4000B2C")]
			[FieldOffset(Offset = "0x0")]
			public long startTimeMs;

			[Token(Token = "0x4000B2D")]
			[FieldOffset(Offset = "0x0")]
			public int durationMs;

			[Token(Token = "0x4000B2E")]
			[FieldOffset(Offset = "0x0")]
			public Func<float, float> easingCurve;

			[Token(Token = "0x4000B2F")]
			[FieldOffset(Offset = "0x0")]
			public float easedProgress;

			[Token(Token = "0x4000B30")]
			[FieldOffset(Offset = "0x0")]
			public float reversingShorteningFactor;

			[Token(Token = "0x4000B31")]
			[FieldOffset(Offset = "0x0")]
			public bool isStarted;

			[Token(Token = "0x4000B32")]
			[FieldOffset(Offset = "0x0")]
			public int delayMs;
		}

		[Token(Token = "0x20003B5")]
		public struct StyleData
		{
			[Token(Token = "0x4000B33")]
			[FieldOffset(Offset = "0x0")]
			public T startValue;

			[Token(Token = "0x4000B34")]
			[FieldOffset(Offset = "0x0")]
			public T endValue;

			[Token(Token = "0x4000B35")]
			[FieldOffset(Offset = "0x0")]
			public T reversingAdjustedStartValue;

			[Token(Token = "0x4000B36")]
			[FieldOffset(Offset = "0x0")]
			public T currentValue;
		}

		[Token(Token = "0x20003B6")]
		public struct EmptyData
		{
			[Token(Token = "0x4000B37")]
			[FieldOffset(Offset = "0x0")]
			public static EmptyData Default;
		}

		[Token(Token = "0x4000B21")]
		[FieldOffset(Offset = "0x0")]
		private long m_CurrentTimeMs;

		[Token(Token = "0x4000B22")]
		[FieldOffset(Offset = "0x0")]
		private TransitionEventsFrameState m_CurrentFrameEventsState;

		[Token(Token = "0x4000B23")]
		[FieldOffset(Offset = "0x0")]
		private TransitionEventsFrameState m_NextFrameEventsState;

		[Token(Token = "0x4000B24")]
		[FieldOffset(Offset = "0x0")]
		public AnimationDataSet<TimingData, StyleData> running;

		[Token(Token = "0x4000B25")]
		[FieldOffset(Offset = "0x0")]
		public AnimationDataSet<EmptyData, T> completed;

		[Token(Token = "0x17000668")]
		public bool isEmpty
		{
			[Token(Token = "0x6001796")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000669")]
		public abstract Func<T, T, bool> SameFunc
		{
			[Token(Token = "0x6001797")]
			get;
		}

		[Token(Token = "0x6001798")]
		protected virtual bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref T a, ref T b)
		{
			return default(bool);
		}

		[Token(Token = "0x6001799")]
		protected Values()
		{
		}

		[Token(Token = "0x600179A")]
		private void SwapFrameStates()
		{
		}

		[Token(Token = "0x600179B")]
		private void QueueEvent(EventBase evt, ElementPropertyPair epp)
		{
		}

		[Token(Token = "0x600179C")]
		private void ClearEventQueue(ElementPropertyPair epp)
		{
		}

		[Token(Token = "0x600179D")]
		private void QueueTransitionRunEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x600179E")]
		private void QueueTransitionStartEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x600179F")]
		private void QueueTransitionEndEvent(VisualElement ve, int runningIndex)
		{
		}

		[Token(Token = "0x60017A0")]
		private void QueueTransitionCancelEvent(VisualElement ve, int runningIndex, long panelElapsedMs)
		{
		}

		[Token(Token = "0x60017A1")]
		private void SendTransitionCancelEvent(VisualElement ve, int runningIndex, long panelElapsedMs)
		{
		}

		[Token(Token = "0x60017A2")]
		public sealed override void CancelAllAnimations()
		{
		}

		[Token(Token = "0x60017A3")]
		public sealed override void CancelAllAnimations(VisualElement ve)
		{
		}

		[Token(Token = "0x60017A4")]
		public sealed override void CancelAnimation(VisualElement ve, StylePropertyId id)
		{
		}

		[Token(Token = "0x60017A5")]
		public sealed override void UpdateAnimation(VisualElement ve, StylePropertyId id)
		{
		}

		[Token(Token = "0x60017A6")]
		public sealed override void GetAllAnimations(VisualElement ve, List<StylePropertyId> outPropertyIds)
		{
		}

		[Token(Token = "0x60017A7")]
		private float ComputeReversingShorteningFactor(int oldIndex)
		{
			return default(float);
		}

		[Token(Token = "0x60017A8")]
		private int ComputeReversingDuration(int newTransitionDurationMs, float newReversingShorteningFactor)
		{
			return default(int);
		}

		[Token(Token = "0x60017A9")]
		private int ComputeReversingDelay(int delayMs, float newReversingShorteningFactor)
		{
			return default(int);
		}

		[Token(Token = "0x60017AA")]
		public bool StartTransition(VisualElement owner, StylePropertyId prop, T startValue, T endValue, int durationMs, int delayMs, Func<float, float> easingCurve, long currentTimeMs)
		{
			return default(bool);
		}

		[Token(Token = "0x60017AB")]
		private void ForceComputedStyleEndValue(int runningIndex)
		{
		}

		[Token(Token = "0x60017AC")]
		public sealed override void Update(long currentTimeMs)
		{
		}

		[Token(Token = "0x60017AD")]
		private void ProcessEventQueue()
		{
		}

		[Token(Token = "0x60017AE")]
		private void UpdateProgress(long currentTimeMs)
		{
		}
	}

	[Token(Token = "0x20003B7")]
	private class ValuesFloat : Values<float>
	{
		[Token(Token = "0x1700066A")]
		public override Func<float, float, bool> SameFunc
		{
			[Token(Token = "0x60017BA")]
			[Address(RVA = "0x50B3890", Offset = "0x50B3890", VA = "0x50B3890", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017BB")]
		[Address(RVA = "0x50B38A0", Offset = "0x50B38A0", VA = "0x50B38A0")]
		private static bool IsSame(float a, float b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017BC")]
		[Address(RVA = "0x50B3930", Offset = "0x50B3930", VA = "0x50B3930")]
		private static float Lerp(float a, float b, float t)
		{
			return default(float);
		}

		[Token(Token = "0x60017BD")]
		[Address(RVA = "0x50B3940", Offset = "0x50B3940", VA = "0x50B3940", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017BE")]
		[Address(RVA = "0x50B39D0", Offset = "0x50B39D0", VA = "0x50B39D0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017BF")]
		[Address(RVA = "0x50B3A80", Offset = "0x50B3A80", VA = "0x50B3A80", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017C0")]
		[Address(RVA = "0x50B3B00", Offset = "0x50B3B00", VA = "0x50B3B00")]
		public ValuesFloat()
		{
		}
	}

	[Token(Token = "0x20003B8")]
	private class ValuesInt : Values<int>
	{
		[Token(Token = "0x1700066B")]
		public override Func<int, int, bool> SameFunc
		{
			[Token(Token = "0x60017C1")]
			[Address(RVA = "0x50B3BA0", Offset = "0x50B3BA0", VA = "0x50B3BA0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017C2")]
		[Address(RVA = "0x50B3BB0", Offset = "0x50B3BB0", VA = "0x50B3BB0")]
		private static bool IsSame(int a, int b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017C3")]
		[Address(RVA = "0x50B3BC0", Offset = "0x50B3BC0", VA = "0x50B3BC0")]
		private static int Lerp(int a, int b, float t)
		{
			return default(int);
		}

		[Token(Token = "0x60017C4")]
		[Address(RVA = "0x50B3CF0", Offset = "0x50B3CF0", VA = "0x50B3CF0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017C5")]
		[Address(RVA = "0x50B3D90", Offset = "0x50B3D90", VA = "0x50B3D90", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017C6")]
		[Address(RVA = "0x50B3E40", Offset = "0x50B3E40", VA = "0x50B3E40", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017C7")]
		[Address(RVA = "0x50B3EC0", Offset = "0x50B3EC0", VA = "0x50B3EC0")]
		public ValuesInt()
		{
		}
	}

	[Token(Token = "0x20003B9")]
	private class ValuesLength : Values<Length>
	{
		[Token(Token = "0x1700066C")]
		public override Func<Length, Length, bool> SameFunc
		{
			[Token(Token = "0x60017C8")]
			[Address(RVA = "0x50B3F60", Offset = "0x50B3F60", VA = "0x50B3F60", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017C9")]
		[Address(RVA = "0x50B3F70", Offset = "0x50B3F70", VA = "0x50B3F70")]
		private static bool IsSame(Length a, Length b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017CA")]
		[Address(RVA = "0x50B4020", Offset = "0x50B4020", VA = "0x50B4020", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref Length a, ref Length b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017CB")]
		[Address(RVA = "0x50B4050", Offset = "0x50B4050", VA = "0x50B4050")]
		internal static Length Lerp(Length a, Length b, float t)
		{
			return default(Length);
		}

		[Token(Token = "0x60017CC")]
		[Address(RVA = "0x50B40A0", Offset = "0x50B40A0", VA = "0x50B40A0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017CD")]
		[Address(RVA = "0x50B4160", Offset = "0x50B4160", VA = "0x50B4160", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017CE")]
		[Address(RVA = "0x50B4210", Offset = "0x50B4210", VA = "0x50B4210", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017CF")]
		[Address(RVA = "0x50B4290", Offset = "0x50B4290", VA = "0x50B4290")]
		public ValuesLength()
		{
		}
	}

	[Token(Token = "0x20003BA")]
	private class ValuesColor : Values<Color>
	{
		[Token(Token = "0x1700066D")]
		public override Func<Color, Color, bool> SameFunc
		{
			[Token(Token = "0x60017D0")]
			[Address(RVA = "0x50B4330", Offset = "0x50B4330", VA = "0x50B4330", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017D1")]
		[Address(RVA = "0x50B4340", Offset = "0x50B4340", VA = "0x50B4340")]
		private static bool IsSame(Color c, Color d)
		{
			return default(bool);
		}

		[Token(Token = "0x60017D2")]
		[Address(RVA = "0x50B4480", Offset = "0x50B4480", VA = "0x50B4480")]
		private static Color Lerp(Color a, Color b, float t)
		{
			return default(Color);
		}

		[Token(Token = "0x60017D3")]
		[Address(RVA = "0x50B44A0", Offset = "0x50B44A0", VA = "0x50B44A0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017D4")]
		[Address(RVA = "0x50B4540", Offset = "0x50B4540", VA = "0x50B4540", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017D5")]
		[Address(RVA = "0x50B45F0", Offset = "0x50B45F0", VA = "0x50B45F0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017D6")]
		[Address(RVA = "0x50B4680", Offset = "0x50B4680", VA = "0x50B4680")]
		public ValuesColor()
		{
		}
	}

	[Token(Token = "0x20003BB")]
	private abstract class ValuesDiscrete<T> : Values<T>
	{
		[Token(Token = "0x1700066E")]
		public override Func<T, T, bool> SameFunc
		{
			[Token(Token = "0x60017D7")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017D8")]
		private static bool IsSame(T a, T b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017D9")]
		private static T Lerp(T a, T b, float t)
		{
			return (T)null;
		}

		[Token(Token = "0x60017DA")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017DB")]
		protected ValuesDiscrete()
		{
		}
	}

	[Token(Token = "0x20003BC")]
	private class ValuesBackground : ValuesDiscrete<Background>
	{
		[Token(Token = "0x60017DC")]
		[Address(RVA = "0x50B4720", Offset = "0x50B4720", VA = "0x50B4720", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017DD")]
		[Address(RVA = "0x50B4800", Offset = "0x50B4800", VA = "0x50B4800", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017DE")]
		[Address(RVA = "0x50B48C0", Offset = "0x50B48C0", VA = "0x50B48C0")]
		public ValuesBackground()
		{
		}
	}

	[Token(Token = "0x20003BD")]
	private class ValuesFontDefinition : ValuesDiscrete<FontDefinition>
	{
		[Token(Token = "0x60017DF")]
		[Address(RVA = "0x50B4900", Offset = "0x50B4900", VA = "0x50B4900", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017E0")]
		[Address(RVA = "0x50B49B0", Offset = "0x50B49B0", VA = "0x50B49B0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017E1")]
		[Address(RVA = "0x50B4A40", Offset = "0x50B4A40", VA = "0x50B4A40")]
		public ValuesFontDefinition()
		{
		}
	}

	[Token(Token = "0x20003BE")]
	private class ValuesFont : ValuesDiscrete<Font>
	{
		[Token(Token = "0x60017E2")]
		[Address(RVA = "0x50B4A80", Offset = "0x50B4A80", VA = "0x50B4A80", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x50B4B30", Offset = "0x50B4B30", VA = "0x50B4B30", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017E4")]
		[Address(RVA = "0x50B4BB0", Offset = "0x50B4BB0", VA = "0x50B4BB0")]
		public ValuesFont()
		{
		}
	}

	[Token(Token = "0x20003BF")]
	private class ValuesTextShadow : Values<TextShadow>
	{
		[Token(Token = "0x1700066F")]
		public override Func<TextShadow, TextShadow, bool> SameFunc
		{
			[Token(Token = "0x60017E5")]
			[Address(RVA = "0x50B4BF0", Offset = "0x50B4BF0", VA = "0x50B4BF0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017E6")]
		[Address(RVA = "0x50B4C00", Offset = "0x50B4C00", VA = "0x50B4C00")]
		private static bool IsSame(TextShadow a, TextShadow b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017E7")]
		[Address(RVA = "0x50B4C10", Offset = "0x50B4C10", VA = "0x50B4C10")]
		private static TextShadow Lerp(TextShadow a, TextShadow b, float t)
		{
			return default(TextShadow);
		}

		[Token(Token = "0x60017E8")]
		[Address(RVA = "0x50B4C70", Offset = "0x50B4C70", VA = "0x50B4C70", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017E9")]
		[Address(RVA = "0x50B4DB0", Offset = "0x50B4DB0", VA = "0x50B4DB0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017EA")]
		[Address(RVA = "0x50B4EA0", Offset = "0x50B4EA0", VA = "0x50B4EA0", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017EB")]
		[Address(RVA = "0x50B4F70", Offset = "0x50B4F70", VA = "0x50B4F70")]
		public ValuesTextShadow()
		{
		}
	}

	[Token(Token = "0x20003C0")]
	private class ValuesScale : Values<Scale>
	{
		[Token(Token = "0x17000670")]
		public override Func<Scale, Scale, bool> SameFunc
		{
			[Token(Token = "0x60017EC")]
			[Address(RVA = "0x50B5010", Offset = "0x50B5010", VA = "0x50B5010", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017ED")]
		[Address(RVA = "0x50B5020", Offset = "0x50B5020", VA = "0x50B5020")]
		private static bool IsSame(Scale a, Scale b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017EE")]
		[Address(RVA = "0x50B5070", Offset = "0x50B5070", VA = "0x50B5070", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017EF")]
		[Address(RVA = "0x50B5120", Offset = "0x50B5120", VA = "0x50B5120", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017F0")]
		[Address(RVA = "0x50B51B0", Offset = "0x50B51B0", VA = "0x50B51B0")]
		private static Scale Lerp(Scale a, Scale b, float t)
		{
			return default(Scale);
		}

		[Token(Token = "0x60017F1")]
		[Address(RVA = "0x50B5200", Offset = "0x50B5200", VA = "0x50B5200", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017F2")]
		[Address(RVA = "0x50B52F0", Offset = "0x50B52F0", VA = "0x50B52F0")]
		public ValuesScale()
		{
		}
	}

	[Token(Token = "0x20003C1")]
	private class ValuesRotate : Values<Rotate>
	{
		[Token(Token = "0x17000671")]
		public override Func<Rotate, Rotate, bool> SameFunc
		{
			[Token(Token = "0x60017F3")]
			[Address(RVA = "0x50B5390", Offset = "0x50B5390", VA = "0x50B5390", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017F4")]
		[Address(RVA = "0x50B53A0", Offset = "0x50B53A0", VA = "0x50B53A0")]
		private static bool IsSame(Rotate a, Rotate b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x50B5470", Offset = "0x50B5470", VA = "0x50B5470", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017F6")]
		[Address(RVA = "0x50B5550", Offset = "0x50B5550", VA = "0x50B5550", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017F7")]
		[Address(RVA = "0x50B5610", Offset = "0x50B5610", VA = "0x50B5610")]
		private static Rotate Lerp(Rotate a, Rotate b, float t)
		{
			return default(Rotate);
		}

		[Token(Token = "0x60017F8")]
		[Address(RVA = "0x50B56D0", Offset = "0x50B56D0", VA = "0x50B56D0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x60017F9")]
		[Address(RVA = "0x50B5870", Offset = "0x50B5870", VA = "0x50B5870")]
		public ValuesRotate()
		{
		}
	}

	[Token(Token = "0x20003C2")]
	private class ValuesTranslate : Values<Translate>
	{
		[Token(Token = "0x17000672")]
		public override Func<Translate, Translate, bool> SameFunc
		{
			[Token(Token = "0x60017FA")]
			[Address(RVA = "0x50B5910", Offset = "0x50B5910", VA = "0x50B5910", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017FB")]
		[Address(RVA = "0x50B5920", Offset = "0x50B5920", VA = "0x50B5920")]
		private static bool IsSame(Translate a, Translate b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017FC")]
		[Address(RVA = "0x50B5990", Offset = "0x50B5990", VA = "0x50B5990", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref Translate a, ref Translate b)
		{
			return default(bool);
		}

		[Token(Token = "0x60017FD")]
		[Address(RVA = "0x50B59B0", Offset = "0x50B59B0", VA = "0x50B59B0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x60017FE")]
		[Address(RVA = "0x50B5A90", Offset = "0x50B5A90", VA = "0x50B5A90", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x60017FF")]
		[Address(RVA = "0x50B5B50", Offset = "0x50B5B50", VA = "0x50B5B50")]
		private static Translate Lerp(Translate a, Translate b, float t)
		{
			return default(Translate);
		}

		[Token(Token = "0x6001800")]
		[Address(RVA = "0x50B5BF0", Offset = "0x50B5BF0", VA = "0x50B5BF0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6001801")]
		[Address(RVA = "0x50B5D30", Offset = "0x50B5D30", VA = "0x50B5D30")]
		public ValuesTranslate()
		{
		}
	}

	[Token(Token = "0x20003C3")]
	private class ValuesTransformOrigin : Values<TransformOrigin>
	{
		[Token(Token = "0x17000673")]
		public override Func<TransformOrigin, TransformOrigin, bool> SameFunc
		{
			[Token(Token = "0x6001802")]
			[Address(RVA = "0x50B5DD0", Offset = "0x50B5DD0", VA = "0x50B5DD0", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001803")]
		[Address(RVA = "0x50B5DE0", Offset = "0x50B5DE0", VA = "0x50B5DE0")]
		private static bool IsSame(TransformOrigin a, TransformOrigin b)
		{
			return default(bool);
		}

		[Token(Token = "0x6001804")]
		[Address(RVA = "0x50B5E50", Offset = "0x50B5E50", VA = "0x50B5E50", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref TransformOrigin a, ref TransformOrigin b)
		{
			return default(bool);
		}

		[Token(Token = "0x6001805")]
		[Address(RVA = "0x50B5E70", Offset = "0x50B5E70", VA = "0x50B5E70", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6001806")]
		[Address(RVA = "0x50B5F50", Offset = "0x50B5F50", VA = "0x50B5F50", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6001807")]
		[Address(RVA = "0x50B6010", Offset = "0x50B6010", VA = "0x50B6010")]
		private static TransformOrigin Lerp(TransformOrigin a, TransformOrigin b, float t)
		{
			return default(TransformOrigin);
		}

		[Token(Token = "0x6001808")]
		[Address(RVA = "0x50B60A0", Offset = "0x50B60A0", VA = "0x50B60A0", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6001809")]
		[Address(RVA = "0x50B61B0", Offset = "0x50B61B0", VA = "0x50B61B0")]
		public ValuesTransformOrigin()
		{
		}
	}

	[Token(Token = "0x20003C4")]
	private class ValuesBackgroundPosition : ValuesDiscrete<BackgroundPosition>
	{
		[Token(Token = "0x600180A")]
		[Address(RVA = "0x50B6250", Offset = "0x50B6250", VA = "0x50B6250", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600180B")]
		[Address(RVA = "0x50B6300", Offset = "0x50B6300", VA = "0x50B6300", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600180C")]
		[Address(RVA = "0x50B6390", Offset = "0x50B6390", VA = "0x50B6390")]
		public ValuesBackgroundPosition()
		{
		}
	}

	[Token(Token = "0x20003C5")]
	private class ValuesBackgroundRepeat : ValuesDiscrete<BackgroundRepeat>
	{
		[Token(Token = "0x600180D")]
		[Address(RVA = "0x50B63D0", Offset = "0x50B63D0", VA = "0x50B63D0", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x600180E")]
		[Address(RVA = "0x50B6480", Offset = "0x50B6480", VA = "0x50B6480", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x600180F")]
		[Address(RVA = "0x50B6500", Offset = "0x50B6500", VA = "0x50B6500")]
		public ValuesBackgroundRepeat()
		{
		}
	}

	[Token(Token = "0x20003C6")]
	private class ValuesBackgroundSize : Values<BackgroundSize>
	{
		[Token(Token = "0x17000674")]
		public override Func<BackgroundSize, BackgroundSize, bool> SameFunc
		{
			[Token(Token = "0x6001810")]
			[Address(RVA = "0x50B6540", Offset = "0x50B6540", VA = "0x50B6540", Slot = "13")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001811")]
		[Address(RVA = "0x50B6550", Offset = "0x50B6550", VA = "0x50B6550")]
		private static bool IsSame(BackgroundSize a, BackgroundSize b)
		{
			return default(bool);
		}

		[Token(Token = "0x6001812")]
		[Address(RVA = "0x50B6560", Offset = "0x50B6560", VA = "0x50B6560", Slot = "14")]
		protected sealed override bool ConvertUnits(VisualElement owner, StylePropertyId prop, ref BackgroundSize a, ref BackgroundSize b)
		{
			return default(bool);
		}

		[Token(Token = "0x6001813")]
		[Address(RVA = "0x50B6580", Offset = "0x50B6580", VA = "0x50B6580", Slot = "11")]
		protected sealed override void UpdateComputedStyle()
		{
		}

		[Token(Token = "0x6001814")]
		[Address(RVA = "0x50B6660", Offset = "0x50B6660", VA = "0x50B6660", Slot = "12")]
		protected sealed override void UpdateComputedStyle(int i)
		{
		}

		[Token(Token = "0x6001815")]
		[Address(RVA = "0x50B6720", Offset = "0x50B6720", VA = "0x50B6720")]
		private static BackgroundSize Lerp(BackgroundSize a, BackgroundSize b, float t)
		{
			return default(BackgroundSize);
		}

		[Token(Token = "0x6001816")]
		[Address(RVA = "0x50B6830", Offset = "0x50B6830", VA = "0x50B6830", Slot = "10")]
		protected sealed override void UpdateValues()
		{
		}

		[Token(Token = "0x6001817")]
		[Address(RVA = "0x50B6A30", Offset = "0x50B6A30", VA = "0x50B6A30")]
		public ValuesBackgroundSize()
		{
		}
	}

	[Token(Token = "0x4000B00")]
	[FieldOffset(Offset = "0x10")]
	private long m_CurrentTimeMs;

	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0x18")]
	private ValuesFloat m_Floats;

	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0x20")]
	private ValuesInt m_Ints;

	[Token(Token = "0x4000B03")]
	[FieldOffset(Offset = "0x28")]
	private ValuesLength m_Lengths;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x30")]
	private ValuesColor m_Colors;

	[Token(Token = "0x4000B05")]
	[FieldOffset(Offset = "0x38")]
	private ValuesBackground m_Backgrounds;

	[Token(Token = "0x4000B06")]
	[FieldOffset(Offset = "0x40")]
	private ValuesFontDefinition m_FontDefinitions;

	[Token(Token = "0x4000B07")]
	[FieldOffset(Offset = "0x48")]
	private ValuesFont m_Fonts;

	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0x50")]
	private ValuesTextShadow m_TextShadows;

	[Token(Token = "0x4000B09")]
	[FieldOffset(Offset = "0x58")]
	private ValuesScale m_Scale;

	[Token(Token = "0x4000B0A")]
	[FieldOffset(Offset = "0x60")]
	private ValuesRotate m_Rotate;

	[Token(Token = "0x4000B0B")]
	[FieldOffset(Offset = "0x68")]
	private ValuesTranslate m_Translate;

	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x70")]
	private ValuesTransformOrigin m_TransformOrigin;

	[Token(Token = "0x4000B0D")]
	[FieldOffset(Offset = "0x78")]
	private ValuesBackgroundPosition m_BackgroundPosition;

	[Token(Token = "0x4000B0E")]
	[FieldOffset(Offset = "0x80")]
	private ValuesBackgroundRepeat m_BackgroundRepeat;

	[Token(Token = "0x4000B0F")]
	[FieldOffset(Offset = "0x88")]
	private ValuesBackgroundSize m_BackgroundSize;

	[Token(Token = "0x4000B10")]
	[FieldOffset(Offset = "0x90")]
	private readonly List<Values> m_AllValues;

	[Token(Token = "0x4000B11")]
	[FieldOffset(Offset = "0x98")]
	private readonly Dictionary<StylePropertyId, Values> m_PropertyToValues;

	[Token(Token = "0x6001762")]
	[Address(RVA = "0x50B23F0", Offset = "0x50B23F0", VA = "0x50B23F0")]
	public StylePropertyAnimationSystem()
	{
	}

	[Token(Token = "0x6001763")]
	private T GetOrCreate<T>(ref T values) where T : new()
	{
		return (T)null;
	}

	[Token(Token = "0x6001764")]
	private bool StartTransition<T>(VisualElement owner, StylePropertyId prop, T startValue, T endValue, int durationMs, int delayMs, Func<float, float> easingCurve, Values<T> values)
	{
		return default(bool);
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x50B2500", Offset = "0x50B2500", VA = "0x50B2500", Slot = "4")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, float startValue, float endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x50B25B0", Offset = "0x50B25B0", VA = "0x50B25B0", Slot = "5")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, int startValue, int endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001767")]
	[Address(RVA = "0x50B2650", Offset = "0x50B2650", VA = "0x50B2650", Slot = "6")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Length startValue, Length endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001768")]
	[Address(RVA = "0x50B26F0", Offset = "0x50B26F0", VA = "0x50B26F0", Slot = "7")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Color startValue, Color endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001769")]
	[Address(RVA = "0x50B27B0", Offset = "0x50B27B0", VA = "0x50B27B0", Slot = "8")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Background startValue, Background endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176A")]
	[Address(RVA = "0x50B2880", Offset = "0x50B2880", VA = "0x50B2880", Slot = "9")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, FontDefinition startValue, FontDefinition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176B")]
	[Address(RVA = "0x50B2940", Offset = "0x50B2940", VA = "0x50B2940", Slot = "10")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Font startValue, Font endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176C")]
	[Address(RVA = "0x50B29E0", Offset = "0x50B29E0", VA = "0x50B29E0", Slot = "11")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, TextShadow startValue, TextShadow endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176D")]
	[Address(RVA = "0x50B2AB0", Offset = "0x50B2AB0", VA = "0x50B2AB0", Slot = "12")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Scale startValue, Scale endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176E")]
	[Address(RVA = "0x50B2B60", Offset = "0x50B2B60", VA = "0x50B2B60", Slot = "15")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Rotate startValue, Rotate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600176F")]
	[Address(RVA = "0x50B2C30", Offset = "0x50B2C30", VA = "0x50B2C30", Slot = "14")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, Translate startValue, Translate endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001770")]
	[Address(RVA = "0x50B2D00", Offset = "0x50B2D00", VA = "0x50B2D00", Slot = "13")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, TransformOrigin startValue, TransformOrigin endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001771")]
	[Address(RVA = "0x50B2DD0", Offset = "0x50B2DD0", VA = "0x50B2DD0", Slot = "16")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundPosition startValue, BackgroundPosition endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001772")]
	[Address(RVA = "0x50B2E80", Offset = "0x50B2E80", VA = "0x50B2E80", Slot = "17")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundRepeat startValue, BackgroundRepeat endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001773")]
	[Address(RVA = "0x50B2F20", Offset = "0x50B2F20", VA = "0x50B2F20", Slot = "18")]
	public bool StartTransition(VisualElement owner, StylePropertyId prop, BackgroundSize startValue, BackgroundSize endValue, int durationMs, int delayMs, [NotNull] Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001774")]
	[Address(RVA = "0x50B2FF0", Offset = "0x50B2FF0", VA = "0x50B2FF0", Slot = "19")]
	public void CancelAllAnimations()
	{
	}

	[Token(Token = "0x6001775")]
	[Address(RVA = "0x50B3150", Offset = "0x50B3150", VA = "0x50B3150", Slot = "20")]
	public void CancelAllAnimations(VisualElement owner)
	{
	}

	[Token(Token = "0x6001776")]
	[Address(RVA = "0x50B3430", Offset = "0x50B3430", VA = "0x50B3430", Slot = "21")]
	public void CancelAnimation(VisualElement owner, StylePropertyId id)
	{
	}

	[Token(Token = "0x6001777")]
	[Address(RVA = "0x50B34C0", Offset = "0x50B34C0", VA = "0x50B34C0", Slot = "22")]
	public void UpdateAnimation(VisualElement owner, StylePropertyId id)
	{
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x50B3550", Offset = "0x50B3550", VA = "0x50B3550", Slot = "23")]
	public void GetAllAnimations(VisualElement owner, List<StylePropertyId> propertyIds)
	{
	}

	[Token(Token = "0x6001779")]
	private void UpdateTracking<T>(Values<T> values)
	{
	}

	[Token(Token = "0x600177A")]
	[Address(RVA = "0x50B36C0", Offset = "0x50B36C0", VA = "0x50B36C0")]
	private long CurrentTimeMs()
	{
		return default(long);
	}

	[Token(Token = "0x600177B")]
	[Address(RVA = "0x50B36D0", Offset = "0x50B36D0", VA = "0x50B36D0", Slot = "24")]
	public void Update()
	{
	}
}
