// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PointerCaptureEventBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001AF")]
[EventCategory(EventCategory.Pointer)]
public abstract class PointerCaptureEventBase<T> : EventBase<T> where T : PointerCaptureEventBase<T>, new()
{
	[Token(Token = "0x17000241")]
	private IEventHandler relatedTarget
	{
		[Token(Token = "0x6000BCE")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000242")]
	public int pointerId
	{
		[Token(Token = "0x6000BCF")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000BD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000BD1")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000BD2")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000BD3")]
	public static T GetPooled(IEventHandler target, IEventHandler relatedTarget, int pointerId)
	{
		return null;
	}

	[Token(Token = "0x6000BD4")]
	protected PointerCaptureEventBase()
	{
	}
}
