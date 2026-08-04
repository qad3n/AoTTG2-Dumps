// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Experimental.ValueAnimation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Experimental;

[Token(Token = "0x2000566")]
public sealed class ValueAnimation<T> : IValueAnimationUpdate
{
	[Token(Token = "0x400128D")]
	[FieldOffset(Offset = "0x0")]
	private long m_StartTimeMs;

	[Token(Token = "0x400128E")]
	[FieldOffset(Offset = "0x0")]
	private int m_DurationMs;

	[Token(Token = "0x4001294")]
	[FieldOffset(Offset = "0x0")]
	private static ObjectPool<ValueAnimation<T>> sObjectPool;

	[Token(Token = "0x4001299")]
	[FieldOffset(Offset = "0x0")]
	private T _from;

	[Token(Token = "0x400129A")]
	[FieldOffset(Offset = "0x0")]
	private bool fromValueSet;

	[Token(Token = "0x17000883")]
	public int durationMs
	{
		[Token(Token = "0x6002104")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002105")]
		set
		{
		}
	}

	[Token(Token = "0x17000884")]
	public Func<float, float> easingCurve
	{
		[Token(Token = "0x6002106")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002107")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000885")]
	public bool isRunning
	{
		[Token(Token = "0x6002108")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002109")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000886")]
	public Action onAnimationCompleted
	{
		[Token(Token = "0x600210A")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600210B")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000887")]
	public bool autoRecycle
	{
		[Token(Token = "0x600210C")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600210D")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000888")]
	private bool recycled
	{
		[Token(Token = "0x600210E")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600210F")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000889")]
	private VisualElement owner
	{
		[Token(Token = "0x6002110")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002111")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700088A")]
	public Action<VisualElement, T> valueUpdated
	{
		[Token(Token = "0x6002112")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002113")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700088B")]
	public Func<VisualElement, T> initialValue
	{
		[Token(Token = "0x6002114")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002115")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700088C")]
	public Func<T, T, float, T> interpolator
	{
		[Token(Token = "0x6002116")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002117")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700088D")]
	public T from
	{
		[Token(Token = "0x6002118")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6002119")]
		set
		{
		}
	}

	[Token(Token = "0x1700088E")]
	public T to
	{
		[Token(Token = "0x600211A")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x600211B")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600211C")]
	public ValueAnimation()
	{
	}

	[Token(Token = "0x600211D")]
	public void Start()
	{
	}

	[Token(Token = "0x600211E")]
	public void Stop()
	{
	}

	[Token(Token = "0x600211F")]
	public void Recycle()
	{
	}

	[Token(Token = "0x6002120")]
	private void UnityEngine_002EUIElements_002EExperimental_002EIValueAnimationUpdate_002ETick(long currentTimeMs)
	{
	}

	[Token(Token = "0x6002121")]
	private void SetDefaultValues()
	{
	}

	[Token(Token = "0x6002122")]
	private void Unregister()
	{
	}

	[Token(Token = "0x6002123")]
	private void Register()
	{
	}

	[Token(Token = "0x6002124")]
	internal void SetOwner(VisualElement e)
	{
	}

	[Token(Token = "0x6002125")]
	private void CheckNotRecycled()
	{
	}

	[Token(Token = "0x6002126")]
	public static ValueAnimation<T> Create(VisualElement e, Func<T, T, float, T> interpolator)
	{
		return null;
	}

	[Token(Token = "0x6002127")]
	public ValueAnimation<T> KeepAlive()
	{
		return null;
	}
}
