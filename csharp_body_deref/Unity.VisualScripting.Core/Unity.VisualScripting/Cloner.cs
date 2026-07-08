using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000004")]
public abstract class Cloner<T> : ICloner
{
	[Token(Token = "0x6000003")]
	protected Cloner()
	{
	}

	[Token(Token = "0x6000004")]
	public abstract bool Handles(Type type);

	[Token(Token = "0x6000005")]
	private void Unity_002EVisualScripting_002EICloner_002EBeforeClone(Type type, object original)
	{
	}

	[Token(Token = "0x6000006")]
	public virtual void BeforeClone(Type type, T original)
	{
	}

	[Token(Token = "0x6000007")]
	private object Unity_002EVisualScripting_002EICloner_002EConstructClone(Type type, object original)
	{
		return null;
	}

	[Token(Token = "0x6000008")]
	public virtual T ConstructClone(Type type, T original)
	{
		return (T)null;
	}

	[Token(Token = "0x6000009")]
	private void Unity_002EVisualScripting_002EICloner_002EFillClone(Type type, ref object clone, object original, CloningContext context)
	{
	}

	[Token(Token = "0x600000A")]
	public virtual void FillClone(Type type, ref T clone, T original, CloningContext context)
	{
	}

	[Token(Token = "0x600000B")]
	private void Unity_002EVisualScripting_002EICloner_002EAfterClone(Type type, object clone)
	{
	}

	[Token(Token = "0x600000C")]
	public virtual void AfterClone(Type type, T clone)
	{
	}
}
