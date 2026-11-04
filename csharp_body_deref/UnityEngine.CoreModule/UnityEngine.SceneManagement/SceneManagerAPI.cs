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
	[Token(Token = "0x4000756")]
	[FieldOffset(Offset = "0x0")]
	private static SceneManagerAPI s_DefaultAPI;

	[Token(Token = "0x170002D9")]
	internal static SceneManagerAPI ActiveAPI
	{
		[Token(Token = "0x60011AB")]
		[Address(RVA = "0x2F55F40", Offset = "0x2F54540", VA = "0x182F55F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DA")]
	public static SceneManagerAPI overrideAPI
	{
		[Token(Token = "0x60011AC")]
		[Address(RVA = "0x2F56000", Offset = "0x2F54600", VA = "0x182F56000")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected internal SceneManagerAPI()
	{
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x2F55EA0", Offset = "0x2F544A0", VA = "0x182F55EA0", Slot = "4")]
	protected internal virtual AsyncOperation LoadSceneAsyncByNameOrIndex(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	protected internal virtual AsyncOperation LoadFirstScene(bool mustLoadAsync)
	{
		return null;
	}
}
