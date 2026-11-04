// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ReflectedMemberProperty
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000020")]
public class ReflectedMemberProperty<TContainer, TValue> : Property<TContainer, TValue>
{
	[Token(Token = "0x2000021")]
	private delegate TValue GetStructValueAction(ref TContainer container);

	[Token(Token = "0x2000022")]
	private delegate void SetStructValueAction(ref TContainer container, TValue value);

	[Token(Token = "0x2000023")]
	private delegate TValue GetClassValueAction(TContainer container);

	[Token(Token = "0x2000024")]
	private delegate void SetClassValueAction(TContainer container, TValue value);

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x0")]
	private readonly IMemberInfo m_Info;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool m_IsStructContainerType;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x0")]
	private GetStructValueAction m_GetStructValueAction;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x0")]
	private SetStructValueAction m_SetStructValueAction;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x0")]
	private GetClassValueAction m_GetClassValueAction;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x0")]
	private SetClassValueAction m_SetClassValueAction;

	[Token(Token = "0x1700001E")]
	public override string Name
	{
		[Token(Token = "0x600007E")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x600007F")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000080")]
	internal ReflectedMemberProperty(IMemberInfo info, string name)
	{
	}

	[Token(Token = "0x6000081")]
	public override TValue GetValue(ref TContainer container)
	{
		return (TValue)null;
	}

	[Token(Token = "0x6000082")]
	public override void SetValue(ref TContainer container, TValue value)
	{
	}
}
