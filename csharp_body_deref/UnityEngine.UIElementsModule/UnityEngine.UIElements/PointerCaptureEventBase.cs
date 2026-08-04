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

[Token(Token = "0x200016B")]
[EventCategory(EventCategory.Pointer)]
public abstract class PointerCaptureEventBase<T> : EventBase<T>, IPointerCaptureEventInternal where T : PointerCaptureEventBase<T>, new()
{
	[Token(Token = "0x170001BC")]
	private IEventHandler relatedTarget
	{
		[Token(Token = "0x60009CC")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001BD")]
	public int pointerId
	{
		[Token(Token = "0x60009CD")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60009CE")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60009CF")]
	protected override void Init()
	{
	}

	[Token(Token = "0x60009D0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x60009D1")]
	public static T GetPooled(IEventHandler target, IEventHandler relatedTarget, int pointerId)
	{
		return null;
	}

	[Token(Token = "0x60009D2")]
	protected PointerCaptureEventBase()
	{
	}
}
