// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PropertyChangedEvent
// Update status: NEW in this game update
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
		[Address(RVA = "0x315D880", Offset = "0x315BE80", VA = "0x18315D880")]
		[CompilerGenerated]
		get
		{
			return default(BindingId);
		}
		[Token(Token = "0x60027E5")]
		[Address(RVA = "0x315D900", Offset = "0x315BF00", VA = "0x18315D900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60027E3")]
	[Address(RVA = "0x315D720", Offset = "0x315BD20", VA = "0x18315D720")]
	static PropertyChangedEvent()
	{
	}

	[Token(Token = "0x60027E6")]
	[Address(RVA = "0x315D800", Offset = "0x315BE00", VA = "0x18315D800")]
	public PropertyChangedEvent()
	{
	}

	[Token(Token = "0x60027E7")]
	[Address(RVA = "0x315D600", Offset = "0x315BC00", VA = "0x18315D600")]
	public static PropertyChangedEvent GetPooled(in BindingId property)
	{
		return null;
	}
}
