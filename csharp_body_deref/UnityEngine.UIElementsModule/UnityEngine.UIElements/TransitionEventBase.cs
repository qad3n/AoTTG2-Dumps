// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TransitionEventBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200023F")]
[EventCategory(EventCategory.StyleTransition)]
public abstract class TransitionEventBase<T> : EventBase<T> where T : TransitionEventBase<T>, new()
{
	[Token(Token = "0x170002E9")]
	public StylePropertyNameCollection stylePropertyNames
	{
		[Token(Token = "0x6000F10")]
		[CompilerGenerated]
		get
		{
			return default(StylePropertyNameCollection);
		}
	}

	[Token(Token = "0x170002EA")]
	protected double elapsedTime
	{
		[Token(Token = "0x6000F11")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000F12")]
	protected TransitionEventBase()
	{
	}

	[Token(Token = "0x6000F13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000F14")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000F15")]
	public static T GetPooled(StylePropertyName stylePropertyName, double elapsedTime)
	{
		return null;
	}
}
