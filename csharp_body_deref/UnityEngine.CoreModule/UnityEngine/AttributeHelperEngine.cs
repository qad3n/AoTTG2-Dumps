using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200013C")]
internal class AttributeHelperEngine
{
	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x0")]
	public static DisallowMultipleComponent[] _disallowMultipleComponentArray;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x8")]
	public static ExecuteInEditMode[] _executeInEditModeArray;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x10")]
	public static RequireComponent[] _requireComponentArray;

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x4ACB8B0", Offset = "0x4ACB8B0", VA = "0x4ACB8B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static Type GetParentTypeDisallowingMultipleInclusion(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x4ACB9F0", Offset = "0x4ACB9F0", VA = "0x4ACB9F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static Type[] GetRequiredComponents(Type klass)
	{
		return null;
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x4ACBF70", Offset = "0x4ACBF70", VA = "0x4ACBF70")]
	private static int GetExecuteMode(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x4ACC070", Offset = "0x4ACC070", VA = "0x4ACC070")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int CheckIsEditorScript(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x4ACC1A0", Offset = "0x4ACC1A0", VA = "0x4ACC1A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int GetDefaultExecutionOrderFor(Type klass)
	{
		return default(int);
	}

	[Token(Token = "0x6000977")]
	private static T GetCustomAttributeOfType<T>(Type klass) where T : Attribute
	{
		return null;
	}
}
