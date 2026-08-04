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

[Token(Token = "0x20001F5")]
[EventCategory(EventCategory.StyleTransition)]
public abstract class TransitionEventBase<T> : EventBase<T> where T : TransitionEventBase<T>, new()
{
	[Token(Token = "0x1700025D")]
	public StylePropertyNameCollection stylePropertyNames
	{
		[Token(Token = "0x6000CCC")]
		[CompilerGenerated]
		get
		{
			return default(StylePropertyNameCollection);
		}
	}

	[Token(Token = "0x1700025E")]
	protected double elapsedTime
	{
		[Token(Token = "0x6000CCD")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000CCE")]
	protected TransitionEventBase()
	{
	}

	[Token(Token = "0x6000CCF")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000CD0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000CD1")]
	public static T GetPooled(StylePropertyName stylePropertyName, double elapsedTime)
	{
		return null;
	}
}
