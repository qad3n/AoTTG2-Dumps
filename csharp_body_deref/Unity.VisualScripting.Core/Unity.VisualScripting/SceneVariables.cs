using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Unity.VisualScripting;

[Token(Token = "0x20001D1")]
[Singleton(Name = "VisualScripting SceneVariables", Automatic = true, Persistent = false)]
[RequireComponent(typeof(Variables))]
[DisableAnnotation]
[AddComponentMenu("")]
[IncludeInSettings(false)]
public sealed class SceneVariables : MonoBehaviour, ISingleton
{
	[Token(Token = "0x4000945")]
	[FieldOffset(Offset = "0x20")]
	private Variables _variables;

	[Token(Token = "0x170001E7")]
	public Variables variables
	{
		[Token(Token = "0x6001117")]
		[Address(RVA = "0x4A41BC0", Offset = "0x4A41BC0", VA = "0x4A41BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001112")]
	[Address(RVA = "0x4A419E0", Offset = "0x4A419E0", VA = "0x4A419E0")]
	public static SceneVariables Instance(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6001113")]
	[Address(RVA = "0x4A41A40", Offset = "0x4A41A40", VA = "0x4A41A40")]
	public static bool InstantiatedIn(Scene scene)
	{
		return default(bool);
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x4A41AA0", Offset = "0x4A41AA0", VA = "0x4A41AA0")]
	public static VariableDeclarations For(Scene? scene)
	{
		return null;
	}

	[Token(Token = "0x6001115")]
	[Address(RVA = "0x4A41C60", Offset = "0x4A41C60", VA = "0x4A41C60")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x4A41CC0", Offset = "0x4A41CC0", VA = "0x4A41CC0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x4A41D20", Offset = "0x4A41D20", VA = "0x4A41D20")]
	public SceneVariables()
	{
	}
}
