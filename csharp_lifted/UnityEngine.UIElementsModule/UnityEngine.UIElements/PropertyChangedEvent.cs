// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PropertyChangedEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200053D")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class PropertyChangedEvent : EventBase<PropertyChangedEvent>
{
	[Token(Token = "0x17000A2D")]
	public BindingId property
	{
		[Token(Token = "0x60027E4")]
		[Address(RVA = "0x6B6BBE0", Offset = "0x6B6ABE0", VA = "0x6B6BBE0")]
		[CompilerGenerated]
		get
		{
			return default(BindingId);
		}
		[Token(Token = "0x60027E5")]
		[Address(RVA = "0x6B6BC00", Offset = "0x6B6AC00", VA = "0x6B6BC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60027E3")]
	[Address(RVA = "0x6B6BB10", Offset = "0x6B6AB10", VA = "0x6B6BB10")]
	static PropertyChangedEvent()
	{
	}

	[Token(Token = "0x60027E6")]
	[Address(RVA = "0x6B6BC30", Offset = "0x6B6AC30", VA = "0x6B6BC30")]
	public PropertyChangedEvent()
	{
	}

	[Token(Token = "0x60027E7")]
	[Address(RVA = "0x6B6BCA0", Offset = "0x6B6ACA0", VA = "0x6B6BCA0")]
	public static PropertyChangedEvent GetPooled(in BindingId property)
	{
		return null;
	}
}
