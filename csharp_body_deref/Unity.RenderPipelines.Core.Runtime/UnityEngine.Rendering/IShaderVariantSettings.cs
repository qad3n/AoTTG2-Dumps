// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IShaderVariantSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000E1")]
[Obsolete("Use GraphicsSettings.GetRenderPipelineSettings<ShaderStrippingSetting>(). #from(2023.3)")]
public interface IShaderVariantSettings
{
	[Token(Token = "0x170000DA")]
	ShaderVariantLogLevel shaderVariantLogLevel
	{
		[Token(Token = "0x600080A")]
		get;
		[Token(Token = "0x600080B")]
		set;
	}

	[Token(Token = "0x170000DB")]
	bool exportShaderVariants
	{
		[Token(Token = "0x600080C")]
		get;
		[Token(Token = "0x600080D")]
		set;
	}

	[Token(Token = "0x170000DC")]
	bool stripDebugVariants
	{
		[Token(Token = "0x600080E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600080F")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		set
		{
		}
	}
}
