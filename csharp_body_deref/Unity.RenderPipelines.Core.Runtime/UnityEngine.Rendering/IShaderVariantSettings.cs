// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IShaderVariantSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200016A")]
public interface IShaderVariantSettings
{
	[Token(Token = "0x17000134")]
	ShaderVariantLogLevel shaderVariantLogLevel
	{
		[Token(Token = "0x6000ABE")]
		get;
		[Token(Token = "0x6000ABF")]
		set;
	}

	[Token(Token = "0x17000135")]
	bool exportShaderVariants
	{
		[Token(Token = "0x6000AC0")]
		get;
		[Token(Token = "0x6000AC1")]
		set;
	}

	[Token(Token = "0x17000136")]
	bool stripDebugVariants
	{
		[Token(Token = "0x6000AC2")]
		[Address(RVA = "0x4BDEA00", Offset = "0x4BDEA00", VA = "0x4BDEA00", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AC3")]
		[Address(RVA = "0x4BDEA10", Offset = "0x4BDEA10", VA = "0x4BDEA10", Slot = "5")]
		set
		{
		}
	}
}
