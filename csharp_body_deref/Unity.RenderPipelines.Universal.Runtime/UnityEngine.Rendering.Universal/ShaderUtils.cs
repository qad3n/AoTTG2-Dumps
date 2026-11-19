// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShaderUtils
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x668A290", Offset = "0x6689290", VA = "0x668A290")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x6689EB0", Offset = "0x6688EB0", VA = "0x6689EB0")]
	public static string GetShaderPath(ShaderPathID id)
	{
		return null;
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x668A0E0", Offset = "0x66890E0", VA = "0x668A0E0")]
	public static ShaderPathID GetEnumFromPath(string path)
	{
		return default(ShaderPathID);
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x668A1F0", Offset = "0x66891F0", VA = "0x668A1F0")]
	public static bool IsLWShader(Shader shader)
	{
		return default(bool);
	}
}
