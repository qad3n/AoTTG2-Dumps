// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShaderUtils
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001A5")]
public static class ShaderUtils
{
	[Token(Token = "0x400092C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] s_ShaderPaths;

	[Token(Token = "0x17000231")]
	internal static float PersistentDeltaTime
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x2069F60", Offset = "0x2068560", VA = "0x182069F60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x2C93200", Offset = "0x2C91800", VA = "0x182C93200")]
	public static string GetShaderPath(ShaderPathID id)
	{
		return null;
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x2C930F0", Offset = "0x2C916F0", VA = "0x182C930F0")]
	public static ShaderPathID GetEnumFromPath(string path)
	{
		return default(ShaderPathID);
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x2C93440", Offset = "0x2C91A40", VA = "0x182C93440")]
	public static bool IsLWShader(Shader shader)
	{
		return default(bool);
	}
}
