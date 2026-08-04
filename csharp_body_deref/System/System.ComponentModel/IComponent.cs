// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IComponent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel.Design.Serialization;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002FE")]
[RootDesignerSerializer("System.ComponentModel.Design.Serialization.RootCodeDomSerializer, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", "System.ComponentModel.Design.Serialization.CodeDomSerializer, System.Design, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a", true)]
[TypeConverter(typeof(ComponentConverter))]
[ComVisible(true)]
public interface IComponent : IDisposable
{
	[Token(Token = "0x17000461")]
	ISite Site
	{
		[Token(Token = "0x6001358")]
		get;
		[Token(Token = "0x6001359")]
		set;
	}

	[Token(Token = "0x1400000E")]
	event EventHandler Disposed;
}
