// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SceneManagement.SceneManagerAPI
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.SceneManagement;

[Token(Token = "0x200024E")]
public class SceneManagerAPI
{
	[Token(Token = "0x4000754")]
	[FieldOffset(Offset = "0x0")]
	private static SceneManagerAPI s_DefaultAPI;

	[Token(Token = "0x170002DE")]
	internal static SceneManagerAPI ActiveAPI
	{
		[Token(Token = "0x60011BF")]
		[Address(RVA = "0x6936AA0", Offset = "0x6935AA0", VA = "0x6936AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DF")]
	public static SceneManagerAPI overrideAPI
	{
		[Token(Token = "0x60011C0")]
		[Address(RVA = "0x6936B80", Offset = "0x6935B80", VA = "0x6936B80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x6936BF0", Offset = "0x6935BF0", VA = "0x6936BF0")]
	protected internal SceneManagerAPI()
	{
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x6936C00", Offset = "0x6935C00", VA = "0x6936C00", Slot = "4")]
	protected internal virtual AsyncOperation LoadSceneAsyncByNameOrIndex(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x6936C10", Offset = "0x6935C10", VA = "0x6936C10", Slot = "5")]
	protected internal virtual AsyncOperation LoadFirstScene(bool mustLoadAsync)
	{
		return null;
	}
}
